#include "Hostel.h"

Hostel::Hostel()
{
	_id = "Default";
	_name = "Default";
	_city = "Default";
}

Hostel::Hostel(std::string id, std::string name, std::string city)
{
	_id = id;
	_name = name;
	_city = city;
}

std::string Hostel::getId()
{
	return _id;
}

std::string Hostel::getName()
{
	return _name;
}

std::string Hostel::getCity()
{
	return _city;
}


