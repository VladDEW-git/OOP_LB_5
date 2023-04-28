#include "Triangle.h"
#include <math.h>
#include <iostream>

Triangle::Triangle()
	: x(0), y(0), z(0)
{
}

Triangle::Triangle(int x, int y, int z)
	: x(x), y(y), z(z)
{
}

int Triangle::Perumetr()
{
	if (!(x + y > z && x + z > y && y + z > x && x > 0 && y > 0 && z > 0))
	{
		std::cout << "It is not possible to form a triangle with such parameters\n";
		return 0;
	}

	int result = x + y + z;

	return result;
}

int Triangle::Area()
{
	if (!(x + y > z && x + z > y && y + z > x && x > 0 && y > 0 && z > 0))
	{
		std::cout << "It is not possible to form a triangle with such parameters\n";
		return 0;
	}

	int p = Perumetr() / 2;

	int S = sqrt(p * (p - x) * (p - y) * (p - z));

	return S;
}

void Triangle::Show()
{
	std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
}
