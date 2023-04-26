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
	std::cout << "Квадрат зі стороною: " << this->GetA() << std::endl;
}

void Square::AreaAndPerimeter()
{
	std::cout << "\nПериметр: " << this->GetA()*4 << std::endl;
	std::cout << "Площа: " << this->GetA() * this->GetA() << std::endl;
}
