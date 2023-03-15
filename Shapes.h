#pragma once
#include <iostream>


class Shapes
{
public:
	Shapes();

	virtual void getData();

	virtual void calculateArea() = 0;
	virtual void calculatePerimeter() = 0;

	virtual void draw();

	void giveResult();

protected:

	double base;
	double height;
	double result;

};

