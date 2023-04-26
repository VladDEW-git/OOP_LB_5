#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle()
	: a(3), b(4), c(5), d(6)
{
}

Quadrangle::Quadrangle(int _a, int _b, int _c, int _d)
	:a(_a), b(_b), c(_c), d(_d)
{   
}

Quadrangle::Quadrangle(const Quadrangle& other)
	:a(other.a), b(other.b), c(other.c), d(other.d)
{
}

Quadrangle::~Quadrangle()
{
}

void Quadrangle::print()
{

    std::cout << "Чотирикутник зі сторонами: " << a << ", " << b << ", " << c << ", " << d << std::endl;
}
void Quadrangle::AreaAndPerimeter()
{
    double p, s;

    p = a + b + c + d;  // обчислення периметра
    double s1 = (a + b + c + d) / 2.0;
    s = sqrt((p / 2 - a) * (p / 2 - b) * (p / 2 - c) * (p / 2 - d));  // обчислення площі за формулою Герона

    std::cout << "\nПериметр: " << p << std::endl;
    std::cout << "Площа: " << s << std::endl;

}
