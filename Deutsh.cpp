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
