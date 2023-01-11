#include <iostream>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hostel.h"
#include "Reservation.h"

int main() {
	//Testing Date class
	Date d1(1,3,2002);
	std::cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << std::endl;
	Date d2(8, 4, 2002);
	std::cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << std::endl;
	
	//Testing Client
	Client c1;
	Client c2("Id", "Name", "Firstname");
	std::cout << c1.getId() << " " << c1.getName() << " " << c1.getFirstName() << std::endl;
	std::cout << c2;

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

	//Testing Reservation
	Reservation Res(d1,d2,h2,c2,ch2);
	
	std::cout << "Detail reservation : "<< Res.getStartDate() << Res.getEndDate() ;
	Hostel temp1 = Res.getHostel();
	std::cout << temp1;
	Client temp2 = Res.getClient();
	std::cout << temp2;
	Chambre temp3 = Res.getChambre();
	std::cout << temp3;
	std::cout << "Prix séjour : " << Res.getCost();

	return 0;
}