#include <iostream>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hostel.h"

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
	Chambre ch2(20, "Suite", 120.10);
	std::cout << ch1;
	std::cout << ch2;

	//Testing Hostel
	Hostel h1;
	Hostel h2("AD34","Ocean","Las Vegas");

	std::cout << h1;
	std::cout << h2;

	h2.addChambre(ch2);
	Chambre test = h2.getChambre(1);
	std::cout << test;
	std::cout << h2;

	return 0;
}