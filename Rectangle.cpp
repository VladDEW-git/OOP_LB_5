#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int width, int height)
	:Quadrangle(width, height, width, height)
{
}

Rectangle::Rectangle(const Rectangle& other)
	:Quadrangle(other)
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::print()
{
	std::cout << "Прямокутник зі сторонами: " << this->GetA() << " і " << this->GetB()<<std::endl;
}

void Rectangle::AreaAndPerimeter()
{
	std::cout << "\nПериметр: " << 2 * (this->GetA() + this->GetB()) << std::endl;
	std::cout << "Площа: " << this->GetA() * this->GetB() << std::endl;
}
