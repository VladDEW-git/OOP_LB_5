#pragma once
#include "NATO.h"
#include "USA.h"
#include "Deutsh.h"
#include "UK.h"
#include <iostream>
#include <string>

class Ukraine : public USA, Deutsh, UK
{
public:

	Ukraine();
	Ukraine(USA usa, Deutsh deu, UK uk);

	void Show(USA usa, Deutsh deu, UK uk);
	void ShowNormalna();
};

