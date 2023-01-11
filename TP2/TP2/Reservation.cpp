#include "Reservation.h"

Reservation::Reservation(Date startdate, Date enddate, Hostel hostel, Client client, Chambre chambre)
{
	_startdate = startdate;
	_enddate = enddate;
	_h = hostel;
	_c = client;
	_ch = chambre;
}

Date Reservation::getStartDate()
{
	return _startdate;
}

Date Reservation::getEndDate()
{
	return _startdate;
}

Hostel Reservation::getHostel()
{
	return _h;
}

Client Reservation::getClient()
{
	return _c;
}

Chambre Reservation::getChambre()
{
	return _ch;
}

void Reservation::setStartDate(Date sdate)
{
	_startdate = sdate;
}

void Reservation::setEndDate(Date edate)
{
	_enddate = edate;
}


//Each month have 30 days
int Reservation::getCost()
{
	int sdate = _startdate.get_year() * 365 + (_startdate.get_month()-1)*30 + _startdate.get_day();
	int edate = _enddate.get_year() * 365 + (_enddate.get_month() - 1) * 30 + _enddate.get_day();
	
	float price = (edate - sdate) * _ch.getPrice();

	return price;
	
}


