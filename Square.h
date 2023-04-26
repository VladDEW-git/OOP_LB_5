#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
	Square(int x);
	Square(const Square& other);
	~Square();

	void print();
	void AreaAndPerimeter();
};

