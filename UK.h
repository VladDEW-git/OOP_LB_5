#pragma once
#include "NATO.h"
#include <iostream>
#include <string>

class UK
{
private:

	std::string date;
	std::string destination;
	int nlaw;
	int chelenger;
	int mastiff;
	int price;
public:

	UK();
	UK(std::string _date, std::string _destination, int _nlaw, int _chelenger, int _mastiff, int _price);

	~UK();
};

