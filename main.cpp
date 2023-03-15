#include <iostream>
#include "Shapes.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


int main()
{
	Shapes *shapes = NULL;
	

	int choice;
	bool isOpen = 1;
	

	while (isOpen)
	{
		std::cout << "\n***********************\nShapes Calculator\n******************\n";
		std::cout << "-1. Square\n";
		std::cout << "-2. Rectange\n";
		std::cout << "-3. Triangle\n";
		std::cout << "-4. Circle\n";
		std::cout << "-5. Exit\n";

		std::cout << "Enter input here: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			shapes = new Square();

			break;
		case 2:
			shapes = new Rectangle();

			break;
		case 3:
			shapes = new Triangle();

			break;
		case 4:
			shapes = new Circle();

			break;
		case 5:
			isOpen = 0;
			break;
		default:
			break;
		}
		shapes->draw();

		std::cout << "\n\n-1. Area \n";
		std::cout << "-2. Perimeter \n";
		std::cout << "-3. Go back to main menu\n\n";

		std::cout << "please input here: ";
		std::cin >> choice;

		shapes->getData();

		switch (choice)
		{
		case 1:
			shapes->calculateArea();

			break;
		case 2:
			shapes->calculatePerimeter();

			break;
		case 3:
			continue;

			break;
		default:
			std::cout << "incorrect input\n";
			break;
		}

		shapes->giveResult();

	}



	return 0;
}