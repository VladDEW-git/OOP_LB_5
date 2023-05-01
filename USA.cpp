#include "USA.h"

USA::USA()
	: date("x.xx.xxxx"), destination("error"), abrams(0), stinger(0), himars(0), price(0)
{
}

USA::USA(std::string _date, std::string _destination, int _abrams, int _stinger, int _himars, int _price)
	: date(_date), destination(_destination), abrams(_abrams), stinger(_stinger), himars(_himars), price(_price)
{
}

USA::~USA()
{
}

void USA::Logistics() const
{
	std::cout << "Delivery date: " << date << "\n" << "Destination: " << destination << "\n";
}

void USA::Price() const
{
	int TankValue = abrams * price;
	int StingValue = stinger * price;
	int HimarsValue = himars * price;
	
	int TotalPrice = TankValue + StingValue + HimarsValue;

	std::cout << "Number of Abrams: " << abrams << "\n" << "Price: " << TankValue << "\n\n";
	std::cout << "Number of Stinger: " << stinger << "\n" << "Price: " << StingValue << "\n\n";
	std::cout << "Number of Himars: " << himars << "\n" << "Price: " << HimarsValue << "\n\n";

	std::cout << "Total Price: " << TotalPrice << std::endl;
}

std::ostream& operator<<(std::ostream& os, const USA& usa)
{
	usa.Logistics();
	usa.Price();

	return os;
}
