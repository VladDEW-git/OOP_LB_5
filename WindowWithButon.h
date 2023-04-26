#pragma once
#include "Window.h"
#include "Buton.h"

class WindowWithButon : public Window, public Buton 
{
private: 
	const char* Menu;

public:

	WindowWithButon();
	WindowWithButon(int width, int heigth, int x, int y, int z, const char* menu);

	~WindowWithButon();

	void Show();
};

