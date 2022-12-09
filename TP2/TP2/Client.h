#pragma once
#include <iostream>

class Client
{
public :
	Client();
	Client(std::string id, std::string name, std::string firstname);


	std::string getId();
	std::string getName();
	std::string getFirstName();

private :
	std::string _id;
	std::string _name;
	std::string _firstname;
};

