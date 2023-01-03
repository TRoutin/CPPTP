#pragma once
#include <iostream>
#include <string>
#include <iomanip>


class Chambre
{
public :
	Chambre();
	Chambre(int num, std::string type, float price);


	int getNum();
	std::string getType();
	float getPrice();


	void setPrice(float price);

private :
	int _num;
	std::string _type;
	float _price;
};

std::ostream& operator<<(std::ostream& os, Chambre& chambre);
