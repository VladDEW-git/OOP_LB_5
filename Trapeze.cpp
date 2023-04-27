#include "Trapeze.h"
#include <math.h>
#include <iostream>

Trapeze::Trapeze()
	: a(0), b(0), c(0), d(0)
{
}

Trapeze::Trapeze(int a, int b, int c, int d)
	: a(a), b(b), c(c), d(d)
{
}

int Trapeze::Perumetr()
{
	if (!(c < a + b + d) || !(d < a + b + c))
	{
		return 0;
	}

	int result = a + b + c + d;

	return result;
}

int Trapeze::Area()
{
	int h = sqrt((c * 2) - pow((b - a), 2) / 4);
	int result = ((a + b) / 2) * h;

	return result;
}

void Trapeze::Show()
{
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
}
