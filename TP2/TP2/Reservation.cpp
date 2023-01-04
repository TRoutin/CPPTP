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
