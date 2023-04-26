#include "Window.h"

Window::Window()
	: buton1(0,0), x(0), y(0), z(0)
{

}

Window::Window(int width, int heigth, int x, int y, int z)
	: buton1(width, heigth), x(x), y(y), z(z)
{

}

Window::~Window()
{

}
