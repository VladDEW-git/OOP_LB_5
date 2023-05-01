#pragma once
#include "NATO.h"
#include <iostream>
#include <string>

class Deutsh : private NATO
{
protected:

	std::string date;
	std::string destination;
	int leopard;
	int pzH2000;
	int price;
public:

	Deutsh();
	Deutsh(std::string _date, std::string _destination, int _leopard, int _pzH2000, int _price);

	~Deutsh();

	void Logistics() const;
	void Price() const;

	friend std::ostream& operator<< (std::ostream& os, const Deutsh& deu);
};

