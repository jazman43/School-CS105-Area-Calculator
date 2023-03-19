#include "Square.h"
//calculates the Area for a square (child) and stores the result into result to be displayed
void Square::calculateArea()
{
	result = base * base;
}
//calculates the Perimeter for a square (child) and stores the result into result to be displayed
void Square::calculatePerimeter()
{
	result = 4 * base;
}
//displays a square to user
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

//gets user input for base of the square
void Square::getData()
{
	std::cout << "Enter base in M:  ";
	std::cin >> base;
}

	