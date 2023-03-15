#pragma once
#include "Shapes.h"


class Triangle : public Shapes
{
public:
	void calculateArea() override;
	void calculatePerimeter() override;

	void draw() override;

	void getData() override;
};

