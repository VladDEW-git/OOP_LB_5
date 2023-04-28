#include "SignalProcessedData.h"

SignalProcessedData::SignalProcessedData()
	:Signal(), data()
{
}

SignalProcessedData::SignalProcessedData(double _amplitude, double _frequency, const ProcessedData& _data)
	:Signal(_amplitude, _frequency), data(_data)
{
}

SignalProcessedData::SignalProcessedData(const SignalProcessedData& other)
	:Signal(other), data(other.data)
{
}

SignalProcessedData::~SignalProcessedData()
{
}

void SignalProcessedData::print() const
{
	std::cout << "\nРезультат обробки сигналу: " << data;
}

std::ostream& operator<<(std::ostream& os, const SignalProcessedData& s)
{
	os << static_cast<const Signal&>(s) << "\n" << s.data;
	return os;
}

std::istream& operator>>(std::istream& is, SignalProcessedData& s)
{
	double amplitude, frequency;
	ProcessedData data;
	is >> amplitude >> frequency >> data;
	s = SignalProcessedData(amplitude, frequency, data);

	return is;
}
