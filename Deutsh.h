#pragma once
#include "NATO.h"
#include <iostream>
#include <string>

class Deutsh : private NATO
{
private:

	std::string date;
	std::string destination;
	int leopard;
	int pzH2000;
	int price;
public:

	Deutsh();
	Deutsh(std::string _date, std::string _destination, int _leopard, int _pzH2000, int _price);

	~Deutsh();
};

