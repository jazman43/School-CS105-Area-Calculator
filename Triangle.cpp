#include "Triangle.h"

void Triangle::calculateArea()
{
	result = 0.5 * base * height;
}

void Triangle::calculatePerimeter()
{
	result = base + (2 * sqrt((height * height) + ((base * base) / 4)));
}

void Triangle::draw()
{
	std::cout << "\n***Triangle Calculator***\n\n";

	std::cout << "         / \\     " << "\n";
	std::cout << "        /  \\     " << "\n";
	std::cout << "       /    \\    " << "\n";
	std::cout << "      /      \\   " << "\n";
	std::cout << "     /________\\  " << "\n";

}

void Triangle::getData()
{
	std::cout << "Enter base in M: ";
	std::cin >> base;
	std::cout << "Enter height in M: ";
	std::cin >> height;
}
