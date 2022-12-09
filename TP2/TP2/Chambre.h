#pragma once
#include <iostream>
class Chambre
{
public :
	Chambre();
	Chambre(int num, std::string type, float price);
	int getNum();
	std::string getType();
	float getPrice();
private :
	int _num;
	std::string _type;
	float _price;
};