CXX=g++
CXXFLAGS=-std=c++17 -Wpedantic -Wall -Wextra -Werror -Weffc++ -Wzero-as-null-pointer-constant
OPTIMIZE=-O2
OBJS=Window.o main.o
TARGET=avoidance
LIBRARIES=-l sfml-graphics -l sfml-window -l sfml-system

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LIBRARIES)

Window.o: Window.hpp Window.cpp
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) -c Window.cpp

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) -c main.cpp

clean:
	/bin/rm -f core
	/bin/rm -f $(OBJS)
	/bin/rm -f $(TARGET)
