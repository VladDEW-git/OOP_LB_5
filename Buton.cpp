#include "Buton.h"

Buton::Buton()
	: width(0), heigth(0)
{

}

Buton::Buton(int width, int heigth)
	: width(width), heigth(heigth)
{

}

int Buton::GetWidth()
{
	return width;
}

int Buton::GetHeigth()
{
	return heigth;
}
