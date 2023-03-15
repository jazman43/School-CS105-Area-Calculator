#include "Circle.h"

void Circle::calculateArea()
{
    result = 3.14 * base * base;
}

void Circle::calculatePerimeter()
{
    result = 2 * 3.14 * base;
}

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

void Circle::getData()
{
    std::cout << "Enter base in M: ";
    std::cin >> base;
    
}
