#include "Deutsh.h"

Deutsh::Deutsh()
	: date("x.xx.xxxx"), destination("error"), leopard(0), pzH2000(), price(0)
{

}

Deutsh::Deutsh(std::string _date, std::string _destination, int _leopard, int _pzH2000, int _price)
	: date(_date), destination(_destination), leopard(_leopard), pzH2000(_pzH2000), price(_price)
{

}

Deutsh::~Deutsh()
{

}

void Deutsh::Logistics() const
{
	std::cout << "Delivery date: " << date << "\n" << "Destination: " << destination << "\n";
}

void Deutsh::Price() const
{
	int TankValue = leopard * price;
	int PzHValue = pzH2000 * price;

	int TotalPrice = TankValue + PzHValue;

	std::cout << "Number of Leopard: " << leopard << "\n" << "Price: " << TankValue << "\n\n";
	std::cout << "Number of PzH2000: " << pzH2000 << "\n" << "Price: " << PzHValue << "\n\n";

	std::cout << "Total Price: " << TotalPrice << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Deutsh& deu)
{
	deu.Logistics();
	deu.Price();

	return os;
}
