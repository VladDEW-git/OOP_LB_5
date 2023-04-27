#pragma once
#include "Figure.h"

class Trapeze : public Figure
{
protected:

	int a;
	int b;
	int c;
	int d;
public:

	Trapeze();
	Trapeze(int a, int b, int c, int d);

	int Perumetr() override;
	int Area() override;
	void Show() override;
};

