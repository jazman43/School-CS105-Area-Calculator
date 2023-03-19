#include "Shapes.h"

//constructor inti vareibles 
Shapes::Shapes()
{
	base = 0.0;
	height = 0.0;
	result = 0.0;
}

//gets and stores base and height into there var (this is the defult)
void Shapes::getData()
{
	std::cout << "(No shape)Enter base: ";
	std::cin >> base;
	std::cout << "Enter height: ";
	std::cin >> height;
}


//this draws shape (when no shape is selected wont draw anything)
void Shapes::draw()
{
	std::cout << "No shape";
}

//displays results to user
void Shapes::giveResult()
{
	std::cout << "result: " << result << " Square meters (sq.m)\n";
}
