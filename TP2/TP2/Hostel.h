#pragma once
#include <iostream>
#include <vector>
#include "Chambre.h"
class Hostel
{
public:
	Hostel();
	Hostel(std::string id, std::string name, std::string city);


	std::string getId();
	std::string getName();
	std::string getCity();

private:
	std::string _id;
	std::string _name;
	std::string _city;
	std::vector<Chambre> ch;
};

