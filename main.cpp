#include <iostream>
#include "Shapes.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


int main()
{
	//create a pointer for the parent class
	Shapes *shapes = NULL;
	

	int choice;
	bool isOpen = 1;
	

	while (isOpen)
	{
		//display menu to user
		std::cout << "\n***********************\nShapes Calculator\n******************\n";
		std::cout << "-1. Square\n";
		std::cout << "-2. Rectange\n";
		std::cout << "-3. Triangle\n";
		std::cout << "-4. Circle\n";
		std::cout << "-5. Exit\n";

		std::cout << "Enter input here: ";
		std::cin >> choice;

		//switch case to go thourgh each use case
		switch (choice)
		{
		case 1:
			//parent shape class calles and creates and stores the square child class 
			shapes = new Square();

			break;
		case 2:
			//parent shape class calles and creates and stores the rectangle child class 
			shapes = new Rectangle();

			break;
		case 3:
			//parent shape class calles and creates and stores the triangle child class 
			shapes = new Triangle();

			break;
		case 4:
			//parent shape class calles and creates and stores the circle child class 
			shapes = new Circle();

			break;
		case 5:
			//exites app
			return 0;
			break;
		default:
			break;
		}

		
		//calles the child class draw function
		shapes->draw();

		//displays a menu to user
		std::cout << "\n\n-1. Area \n";
		std::cout << "-2. Perimeter \n";
		std::cout << "-3. Go back to main menu\n\n";

		std::cout << "please input here: ";
		std::cin >> choice;
		//returs user to main menu
		if (choice == 3) { continue; }

		//calles to child getData function to get info for calculation
		shapes->getData();

		switch (choice)
		{
		case 1:
			//calles to child calculateArea function to get area using data provided in the getData function 
			shapes->calculateArea();

			break;
		case 2:
			//calles to child calculatePerimeter function to get perimeter using data provided in the getData function
			shapes->calculatePerimeter();

			break;
		
		default:
			std::cout << "incorrect input\n";
			break;
		}
		//returns result of calculation made
		shapes->giveResult();
		
		

	}



	return 0;
}