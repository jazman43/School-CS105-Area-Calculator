#include "Rectangle.h"

void Rectangle::calculateArea()
{
	result = base * height;
}

void Rectangle::calculatePerimeter()
{
	result = 2 * (base + height);
}

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

void Rectangle::getData()
{
	std::cout << "Enter base in M: ";
	std::cin >> base;
	std::cout << "Enter height in M: ";
	std::cin >> height;
}
