#include "Shapes.h"

Shapes::Shapes()
{
	base = 0.0;
	height = 0.0;
	result = 0.0;
}

void Shapes::getData()
{
	std::cout << "Enter base: ";
	std::cin >> base;
	std::cout << "Enter height: ";
	std::cin >> height;
}



void Shapes::draw()
{
	std::cout << "No shape";
}

void Shapes::giveResult()
{
	std::cout << "result: " << result << " Square meters (sq.m)\n";
}
