#pragma once
#include "Shapes.h"

//child shape with public assess to parent
class Triangle : public Shapes
{
public:
	//orver rides the virtual functions in the parent
	void calculateArea() override;
	void calculatePerimeter() override;

	void draw() override;

	void getData() override;
};

