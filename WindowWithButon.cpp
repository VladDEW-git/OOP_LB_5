#include "WindowWithButon.h"
#include <iostream>

WindowWithButon::WindowWithButon()
	: Window(0,0,0,0,0), Menu()
{

}

WindowWithButon::WindowWithButon(int width, int heigth, int x, int y, int z, const char* menu)
	: Window(width, heigth, x, y, z), Menu(menu)
{

}

WindowWithButon::~WindowWithButon()
{
	Menu = nullptr;
}

void WindowWithButon::Show()
{
	std::cout << "Menu: " << Menu << "\n" << "Window position: " << x << ", " << y << ", " << z << "\n"
		<< "Button size: \n Width - " << width << ", Heigth: " << heigth << std::endl;
}
