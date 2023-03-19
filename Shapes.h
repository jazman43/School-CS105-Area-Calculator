#pragma once
#include <iostream>

//parent class
class Shapes
{
public:
	//defult constrcter
	Shapes();

	//virtual functions over ridable by child classes 
	virtual void getData();

	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;

	virtual void draw();

	//returns results for the calculation done 
	void giveResult();

protected:

	double base;
	double height;
	double result;

};

