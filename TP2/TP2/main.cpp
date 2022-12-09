#include <iostream>
#include "Date.h"

int main() {
	Date d1(1,3,2002);
	std::cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << std::endl;
	return 0;
}