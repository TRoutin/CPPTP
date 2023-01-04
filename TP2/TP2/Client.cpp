#include "Client.h"


Client::Client()
{
	_id = "Default";
	_name = "Default";
	_firstname = "Default";
}

Client::Client(std::string id, std::string name, std::string firstname)
{
	_id = id;
	_name = name;
	_firstname = firstname;
}

std::string Client::getId()
{
	return _id;
}

std::string Client::getName()
{
	return _name;
}

std::string Client::getFirstName()
{
	return _firstname;
}

std::ostream& operator<<(std::ostream& os, Client& c) {

	std::string to_display;
	to_display = "Name : " + c.getName() + " / First Name : " + c.getFirstName() + " / Id : " + c.getId();
	os << to_display << std::endl;
	return os;
}
