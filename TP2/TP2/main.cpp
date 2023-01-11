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

	// Creating list of client
	Client c1("c1", "Routin", "Thomas");
	Client c2("c2", "Thery", "Maxime");
	Client c3("c3", "Chirac", "Jack");
	Client c4("c4", "Too", "Elise");
	Client c5("c5", "Ginhack", "Dom");
	Client c6("c6", "Gasoil", "Vincent");
	Client c7("c7", "Stone", "Ze");

	std::vector <Client> c;
	c.push_back(c1);
	c.push_back(c2);
	c.push_back(c3);
	c.push_back(c4);
	c.push_back(c5);
	c.push_back(c6);
	c.push_back(c7);

	//printing list of client 

	for (int i = 0; i < c.size(); i++) {
		std::cout << c.at(i);
	}

	// Searching for client
	std::string client_name;
	std::cout << "Enter client name : " << std::endl;
	std::cin >> client_name;
	bool Matching_result = 0;

	for (int j = 0; j < c.size(); j++) {
		std::string tempname;
		tempname = c.at(j).getName();

		if (tempname == client_name) {
			std::cout << "Infos of the client : " << std::endl << c.at(j);
			Matching_result = 1;
			break;
		}
		else {
			Matching_result = 0;
		}
	}
	//Adding client if it doesn't exist
	if (Matching_result == 0) {
		std::cout << "No matching result" << std::endl;
		std::string tempfn;
		std::string tempid = "c" + std::to_string(c.size()+1);
		std::cout << "Enter firstname of the client : " << std::endl;
		std::cin >> tempfn;
		Client Newclient(tempid,client_name,tempfn);
		c.push_back(Newclient);
		std::cout << Newclient;
		
	}

	//Creating the start and end date and checking errors
	int tempday;
	int tempmonth;
	int tempyear;
	std::cout << "Enter start date : (day at first then month then year in number)" <<std::endl;
	std::cin >> tempday;
	while(tempday > 30) {
		std::cout << "Wrong day, enter again : " << std::endl;
		std::cin >> tempday;
	}
	std::cin >> tempmonth;
	while (tempmonth > 12) {
		std::cout << "Wrong month, enter again : " << std::endl;
		std::cin >> tempmonth;
	}
	std::cin >> tempyear;
	Date ResStarDate(tempday, tempmonth, tempyear);

	int sdate;
	int edate;

	int countitteration = 0; //Used just to print a error message

	Date ResEndDate;
	while((sdate = (ResStarDate.get_year() * 365 + (ResStarDate.get_month() - 1) * 30 + ResStarDate.get_day()))>=(edate = ResEndDate.get_year() * 365 + (ResEndDate.get_month() - 1) * 30 + ResEndDate.get_day())){
		if (countitteration != 0) {
			std::cout << "Error Try again" << std::endl;
		}

		std::cout << "Enter end date : (day at first then month then year in number)" << std::endl;
		std::cin >> tempday;
		while (tempday > 30) {
			std::cout << "Wrong day, enter again : " << std::endl;
			std::cin >> tempday;
		}
		std::cin >> tempmonth;
		while (tempmonth > 12) {
			std::cout << "Wrong month, enter again : " << std::endl;
			std::cin >> tempmonth;
		}
		std::cin >> tempyear;
		ResEndDate.setday(tempday);
		ResEndDate.setyear(tempyear);
		ResEndDate.setmonth(tempmonth);
		countitteration++;
	}

	//Searching for Chambre type
	std::cout << "Choose the type of chambre you want : " << std::endl;
	std::string temptypech;
	std::cin >> temptypech;
	bool chambretypecheck=0;

	for (int i = 1; i < h1.getTotalChambre() + 1; i++) {
		
		Chambre tempch;
		tempch = h1.getChambre(i);
		if (tempch.getType() == temptypech) {
			std::cout << "You can have the chambre number " << tempch.getNum() << std::endl;
			std::cout << "It will cost " << tempch.getPrice() << "$ per night" << std::endl;
			chambretypecheck = 1;
			break;
		}
	}
	if (chambretypecheck == 0) {
		std::cout << "Sorry we don't have this type of chambre or none are available" << std::endl;
	}

	return 0;
}