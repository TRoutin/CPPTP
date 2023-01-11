#include <iostream>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hostel.h"
#include "Reservation.h"

int main() {
	/* ALL OF THE FIRST TESTING OF EACH CLASSES AND FUNCTION 
	
	
	//Testing Date class
	Date d1(1,3,2002);
	std::cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << std::endl;
	Date d2(8, 4, 2002);
	std::cout << d2.get_day() << "/" << d2.get_month() << "/" << d2.get_year() << std::endl;
	
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
	std::cout << "Prix séjour : " << Res.getCost();*/


	//Creating chambres

	Chambre ch1(1, "Single", 100);
	Chambre ch2(2, "Single", 100);
	Chambre ch3(3, "Single", 100);
	Chambre ch4(4, "Double", 125);
	Chambre ch5(5, "Double", 125);
	Chambre ch6(6, "Double", 125);
	Chambre ch7(7, "Double", 125);
	Chambre ch8(8, "Double", 125);
	Chambre ch9(9, "Suite", 210);
	Chambre ch10(10, "Suite", 210);

	//Creating Hostel
	Hostel h1("V4ld", "VV5 Hostel", "Paris");

	//Adding each chambre to the hostel

	h1.addChambre(ch1);
	h1.addChambre(ch2);
	h1.addChambre(ch3);
	h1.addChambre(ch4);
	h1.addChambre(ch5);
	h1.addChambre(ch6);
	h1.addChambre(ch7);
	h1.addChambre(ch8);
	h1.addChambre(ch9);
	h1.addChambre(ch10);

	// Printing hostel and chambre info
	std::cout << h1;
	for (int i=1; i < h1.getTotalChambre()+1; i++) {
		//adding temporary var to print each chambre
		Chambre temp1;
		temp1 = h1.getChambre(i);
		std::cout << temp1;
	}

	return 0;
}