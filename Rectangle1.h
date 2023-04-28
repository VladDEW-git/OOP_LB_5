#pragma once
#include "Quadrangle.h"

class Rectangle1 : public Quadrangle
{
public:
	Rectangle1(int width, int height);
	Rectangle1(const Rectangle1& other);
	~Rectangle1();

	void print();
	void AreaAndPerimeter();
};

