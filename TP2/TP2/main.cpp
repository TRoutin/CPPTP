#include <iostream>
#include "Date.h"
#include "Client.h"

int main() {
	//Testing Date class
	Date d1(1,3,2002);
	std::cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << std::endl;
	
	//Testing Client
	Client c1("id","name","surname");
	std::cout << c1.getId() << " " << c1.getName() << " " << c1.getFirstName() << std::endl;
	return 0;
}