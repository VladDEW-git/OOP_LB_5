#pragma once
#include "NATO.h"
#include <iostream>
#include <string>

class UK
{
protected:

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

	void Logistics() const;
	void Price() const;

	friend std::ostream& operator<< (std::ostream& os, const UK& uk);
};

