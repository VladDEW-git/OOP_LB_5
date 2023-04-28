#include "ProcessedData.h"

ProcessedData::ProcessedData()
	: data("���� ������")
{
}

ProcessedData::ProcessedData(std::string _data)
	:data(_data)
{
}

ProcessedData::ProcessedData(const ProcessedData& other)
	:data(other.data)
{
}

ProcessedData::~ProcessedData()
{
}

void ProcessedData::print() const
{
	std::cout << "��������� �������: " << data;
}


std::ostream& operator<<(std::ostream& os, const ProcessedData& s)
{
	s.print();
	return os;
}

std::istream& operator>>(std::istream& is, ProcessedData& s)
{
    getline(is, s.data);
	return is;

}
