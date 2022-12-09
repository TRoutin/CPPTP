#include <iostream>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"

int main() {
	//Testing Date class
	Date d1(1,3,2002);
	std::cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << std::endl;
	
	//Testing Client
	Client c1;
	Client c2("Id", "Name", "Firstname");
	std::cout << c1.getId() << " " << c1.getName() << " " << c1.getFirstName() << std::endl;
	std::cout << c2.getId() << " " << c2.getName() << " " << c2.getFirstName() << std::endl;

	//Testing Chambre
	Chambre ch1;
	Chambre ch2(20, "Suite", 120);
	std::cout << ch1.getNum() << " " << ch1.getType() << " " << ch1.getPrice() << std::endl;
	std::cout << ch2.getNum() << " " << ch2.getType() << " " << ch2.getPrice() << std::endl;



	return 0;
}