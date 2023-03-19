#include "Triangle.h"
//calculates the Area for a triangle (child) and stores the result into result to be displayed
void Triangle::calculateArea()
{
	result = 0.5 * base * height;
}
//calculates the Perimeter for a triangle (child) and stores the result into result to be displayed
void Triangle::calculatePerimeter()
{
	result = base + (2 * sqrt((height * height) + ((base * base) / 4)));
}
//displays a triangle to user
void Triangle::draw()
{
	std::cout << "\n***Triangle Calculator***\n\n";

	std::cout << "  *           " << "\n";
	std::cout << "  * *         " << "\n";
	std::cout << "  * * *       " << "\n";
	std::cout << "  * * * *     " << "\n";
	std::cout << "  * * * * *   " << "\n";

}

//gets user input for base and height of the triangle
void Triangle::getData()
{
	std::cout << "(0.5 * base * height = area)Enter base in M: ";
	std::cin >> base;
	std::cout << "Enter height in M: ";
	std::cin >> height;
}
