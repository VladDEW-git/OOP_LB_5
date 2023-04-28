#include "Signal.h"

Signal::Signal()
	: amplitude(0.0), frequency(0.0)
{
}

Signal::Signal(double _amplitude, double _frequency)
	:amplitude(_amplitude), frequency(_frequency)
{
}

Signal::Signal(const Signal& other)
	:amplitude(other.amplitude), frequency(other.frequency)
{
}

Signal::~Signal()
{
}

void Signal::print() const
{
	std::cout << "Амплітуда: " << amplitude << ", Частота: " << frequency;
}

std::ostream& operator<<(std::ostream& os, const Signal& s)
{
	os << "Амплітуда: " << s.amplitude << ", Частота: " << s.frequency;
	return os;
}

std::istream& operator>>(std::istream& is, Signal& s)
{
	is >> s.amplitude >> s.frequency;
	return is;
}