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
