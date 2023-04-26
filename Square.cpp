#include "Square.h"
#include <iostream>

Square::Square(int x)
	:Quadrangle(x, x, x, x)
{
}

Square::Square(const Square& other)
	:Quadrangle(other)
{
}

Square::~Square()
{
}

void Square::print()
{
	std::cout << "������� � ��������: " << this->GetA() << std::endl;
}

void Square::AreaAndPerimeter()
{
	std::cout << "\n��������: " << this->GetA()*4 << std::endl;
	std::cout << "�����: " << this->GetA() * this->GetA() << std::endl;
}
