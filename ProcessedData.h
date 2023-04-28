#pragma once
#include <iostream>
#include "Signal.h"
#include <string>

class ProcessedData
{
protected:
	std::string data;
	
public:
	ProcessedData();
	ProcessedData(std::string _data);
	ProcessedData(const ProcessedData& other);
	virtual ~ProcessedData();

	void print() const;

	friend std::ostream& operator<<(std::ostream& os, const ProcessedData& s);
	friend std::istream& operator>>(std::istream& is, ProcessedData& s);

};

