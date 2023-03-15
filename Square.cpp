#include "Square.h"

void Square::calculateArea()
{
	result = base * base;
}

void Square::calculatePerimeter()
{
	result = 4 * base;
}

void Square::draw()
{
	std::cout << "\n***Square Calculator***\n\n";

	std::cout << "  -------------" << "\n";
	std::cout << " |             |" << "\n";
	std::cout << " |             |" << "\n";
	std::cout << " |             |" << "\n";
	std::cout << " |             |" << "\n";
	std::cout << " |             |" << "\n";
	std::cout << " |             |" << "\n";
	std::cout << "  -------------" << "\n";
}

void Square::getData()
{
	std::cout << "Enter base in M:  ";
	std::cin >> base;
}

	