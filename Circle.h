#pragma once
#include "Shapes.h"
class Circle : public Shapes
{
public:

	void calculateArea() override;
	void calculatePerimeter() override;

	void draw() override;

	void getData() override;

};

