#pragma once
#include <iostream>

class Signal
{
protected:
	double amplitude;
	double frequency;

public:
	Signal();
	Signal(double amplitude, double frequency);
	Signal(const Signal& other);
	virtual ~Signal();

	void print() const;

	friend std::ostream& operator<<(std::ostream& os, const Signal& s);
	friend std::istream& operator>>(std::istream& is, Signal& s);
   
};

