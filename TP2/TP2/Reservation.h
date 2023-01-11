#include <iostream>
#include "Date.h"
#include "Client.h"
#include "Hostel.h"
#include "Chambre.h"



class Reservation
{
public :
	
	Reservation(Date startdate, Date enddate, Hostel hostel, Client client, Chambre chambre);

	Date getStartDate();
	Date getEndDate();
	Hostel getHostel();
	Client getClient();
	Chambre getChambre();

	void setStartDate(Date sdate);
	void setEndDate(Date edate);

	int getCost();
private :
	Date _startdate;
	Date _enddate;
	Client _c;
	Hostel _h;
	Chambre _ch;
};

