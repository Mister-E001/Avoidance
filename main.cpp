#include "Window.hpp"
#include "RectangleShape.hpp"

int main(int argc, char** argv)
{
    //declare default window size
    unsigned int width = 1200;
    unsigned int length = 600;

    //read custom size arguments from command line
    if(argc == 2)
    {
        width = atoi(argv[1]);
        length = atoi(argv[2]);
    }

    //initialize window object
    Window window("Avoidance", width, length);

    //main game loop
    while(window.isOpen())
    {
        //event handling
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                //when window is closed
                case sf::Event::Closed:
                {
                    window.close();
                    break;
                }

                //anything we haven't caught
                default:
                {
                    break;
                }
            }
        }
        
        //create our simple rectangle
        //sf::RectangleShape rectangle;

        //Usually I do Erase, Redraw, Input, Calculate in that order,
        //but if documentation specifically has events before clear and redraw,
        //I'm okay with that too.
        window.clear();
        window.display();
        
    }

    return 0;
}
