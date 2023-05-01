#include "UK.h"

UK::UK()
	: date("x.xx.xxxx"), destination("error"), nlaw(0), chelenger(0), mastiff(0), price(0)
{

}

UK::UK(std::string _date, std::string _destination, int _nlaw, int _chelenger, int _mastiff, int _price)
	: date(_date), destination(_destination), nlaw(_nlaw), chelenger(_chelenger), mastiff(_mastiff), price(_price)
{

}

UK::~UK()
{

}

void UK::Logistics() const
{
	std::cout << "Delivery date: " << date << "\n" << "Destination: " << destination << "\n";
}

void UK::Price() const
{
	int TankValue = chelenger * price;
	int NlawValue = nlaw * price;
	int MastiffValue = mastiff * price;

	int TotalPrice = TankValue + NlawValue + MastiffValue;

	std::cout << "Number of Chelenger: " << chelenger << "\n" << "Price: " << TankValue << "\n\n";
	std::cout << "Number of Nlaw: " << nlaw << "\n" << "Price: " << NlawValue << "\n\n";
	std::cout << "Number of Mastiff: " << mastiff << "\n" << "Price: " << MastiffValue << "\n\n";

	std::cout << "Total Price: " << TotalPrice << std::endl;
}

std::ostream& operator<<(std::ostream& os, const UK& uk)
{
	uk.Logistics();
	uk.Price();

	return os;
}
