#include "Rectangle.h"

//calculates area for a rectangle (child) and stores the result into result to be displayed
void Rectangle::calculateArea()
{
	
	result = base * height;
}
//calculates the Perimeter for a rectangle (child) and stores the result into result to be displayed
void Rectangle::calculatePerimeter()
{
	result = 2 * (base + height);
}
//displays a rectangle to user
void Rectangle::draw()
{
	std::cout << "\n***Rectangle Calculator***\n\n";

	std::cout << "  ------------------- " << "\n";
	std::cout << " |                   |" << "\n";
	std::cout << " |                   |" << "\n";
	std::cout << " |                   |" << "\n";
	std::cout << " |                   |" << "\n";
	std::cout << " |                   |" << "\n";
	std::cout << " |                   |" << "\n";
	std::cout << "  -------------------" << "\n";
}

//gets user input for base and height of the rectangle
void Rectangle::getData()
{
	std::cout << "Enter base in M: ";
	std::cin >> base;
	std::cout << "Enter height in M: ";
	std::cin >> height;
}
