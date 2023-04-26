#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
	Rectangle(int width, int height);
	Rectangle(const Rectangle& other);
	~Rectangle();

	void print();
	void AreaAndPerimeter();
};

