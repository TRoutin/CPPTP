#include "Chambre.h"

Chambre::Chambre() : _num(0), _price(0)
{
	_type = "Default";
}

Chambre::Chambre(int num, std::string type, float price)
{
	_num = num;
	_type = type;
	_price = price;
}

int Chambre::getNum()
{
	return _num;
}

std::string Chambre::getType()
{
	return _type;
}

float Chambre::getPrice()
{
	return _price;
}
