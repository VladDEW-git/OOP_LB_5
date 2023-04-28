#include "Rectangle1.h"
#include <iostream>

Rectangle1::Rectangle1(int width, int height)
	:Quadrangle(width, height, width, height)
{
}

Rectangle1::Rectangle1(const Rectangle1& other)
	:Quadrangle(other)
{
}

Rectangle1::~Rectangle1()
{
}

void Rectangle1::print()
{
	std::cout << "Прямокутник зі сторонами: " << this->GetA() << " і " << this->GetB()<<std::endl;
}

void Rectangle1::AreaAndPerimeter()
{
	std::cout << "\nПериметр: " << 2 * (this->GetA() + this->GetB()) << std::endl;
	std::cout << "Площа: " << this->GetA() * this->GetB() << std::endl;
}
