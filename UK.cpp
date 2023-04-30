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
