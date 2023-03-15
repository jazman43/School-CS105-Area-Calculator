#pragma once
#include "Shapes.h"


class Rectangle : public Shapes
{
public:

	void calculateArea() override;

	void calculatePerimeter() override;

	void draw() override;

	void getData() override;

};

