#include "Circle.h"
//calculates the Area for a circle (child) and stores the result into result to be displayed
void Circle::calculateArea()
{
    result = 3.14 * base * base;
}
//calculates the Perimeter for a circle (child) and stores the result into result to be displayed
void Circle::calculatePerimeter()
{
    result = 2 * 3.14 * base;
}
//displays a circle to user
void Circle::draw()
{
    std::cout << "\n***Circle Calulator***\n\n";

    std::cout << "      ___" << "\n";
    std::cout << "   /       \\" << "\n";
    std::cout << "  |         |" << "\n";
    std::cout << "  |         |" << "\n";
    std::cout << "   \\       /" << "\n";
    std::cout << "      ---" << "\n";
}

//gets user input for radius of the circle
void Circle::getData()
{
    std::cout << "(pi * radius squared = area) Enter radius in M: ";
    std::cin >> base;
    
}
