#pragma once
#include "Figure.h"

class Triangle : public Figure
{
protected:

	int x;
	int y;
	int z;
public:

	Triangle();
	Triangle(int x, int y, int z);

	int Perumetr() override;
	int Area() override;
	void Show() override;
};

