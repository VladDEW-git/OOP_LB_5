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
	std::cout << "����������� � ���������: " << this->GetA() << " � " << this->GetB()<<std::endl;
}

void Rectangle::AreaAndPerimeter()
{
	std::cout << "\n��������: " << 2 * (this->GetA() + this->GetB()) << std::endl;
	std::cout << "�����: " << this->GetA() * this->GetB() << std::endl;
}
