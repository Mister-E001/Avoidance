#include "Window.hpp"

int main(int argc, char** argv)
{
    unsigned int width = 1200;
    unsigned int length = 600;

    if(argc == 2)
    {
        width = atoi(argv[1]);
        length = atoi(argv[2]);
    }

    Window window("Avoidance", width, length);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                    break;
                }

                default:
                {
                    break;
                }
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}
