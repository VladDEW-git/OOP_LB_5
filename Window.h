#pragma once
#include "Buton.h"

class Window
{
protected:

	Buton buton1;
	int x;
	int y;
	int z;
public:

	Window();
	Window(int width, int heigth, int x, int y, int z);

	~Window();
};

