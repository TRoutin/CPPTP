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

void Chambre::setPrice(float price)
{
	_price = price;

}

Chambre& Chambre::operator=(const Chambre& autre)
{
	_num = autre._num;
	_type = autre._type;
	_price = autre._price;
	return *this;
}

std::ostream &operator<<(std::ostream& os, Chambre &chambre) {

	std::string to_display;
	to_display = "Chambre numero " + std::to_string(chambre.getNum()) + " : " + chambre.getType() + " ";
	os << to_display << std::fixed << std::setprecision(2) << chambre.getPrice() <<  std::endl;
	return os;
}

