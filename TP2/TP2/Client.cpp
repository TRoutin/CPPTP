#include "Client.h"


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
