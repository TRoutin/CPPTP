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

int Hostel::getTotalChambre()
{
	return ch.size();
}

Chambre Hostel::getChambre(int i)
{
	return ch.at(i-1);
}


void Hostel::addChambre(Chambre c)
{
	ch.push_back(c);
}

Hostel& Hostel::operator=(const Hostel& autre)
{
	_id = autre._id;
	_city = autre._city;
	_name = autre._name;
	ch = autre.ch;
	return *this;
}



std::ostream& operator<<(std::ostream& os, Hostel& h) {

	std::string to_display;
	to_display = "Hotel : " + h.getName() + " / Id : " + h.getId() + " / Ville : " + h.getCity() + " / Nb chambre : " + std::to_string(h.getTotalChambre());
	os << to_display <<  std::endl;
	return os;
}


