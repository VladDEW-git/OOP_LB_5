#include "Circle.h"
#include <iostream>

Circle::Circle()
	: lenth(0)
{
}

Circle::Circle(int lenth)
	: lenth(lenth)
{
}

int Circle::Perumetr()
{
	if (lenth <= 0)
	{
		std::cout << "The length of a circle cannot be 0 or negative\n";
		return 0;
	}

	int r = lenth / (2 * 3.14);
	int result = (2 * 3.14) * r;

	return result;
}

int Circle::Area()
{
	if (lenth <= 0)
	{
		std::cout << "The length of a circle cannot be 0 or negative\n";
		return 0;
	}

	int r = lenth / (2 * 3.14);
	int result = 3.14 * (r * 2);

	return result;
}

void Circle::Show()
{
	std::cout << "Length = " << lenth << std::endl;
}
