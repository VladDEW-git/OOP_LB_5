#pragma once
#include "Figure.h"

class Circle : public Figure
{
protected:

	int lenth;
public:

	Circle();
	Circle(int lenth);

	int Perumetr() override;
	int Area() override;
	void Show() override;
};

