#pragma once
#include "NATO.h"
#include <string>
#include <iostream>

class USA : public NATO
{
private:

	std::string date;
	std::string destination;
	int abrams;
	int stinger;
	int himars;
	int price;
public:

	USA();
	USA(std::string _date, std::string _destination, int _abrams, int _stinger, int _himars, int _price);

	~USA();


};

