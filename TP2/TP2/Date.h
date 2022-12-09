#include <iostream>
#include <string.h>

class Date {
public:
    Date();
    Date(int day, int month, int year); // Constructor (parametrized)
    int get_day() const;                      // _day getter function
    int get_month() const;                    // _month getter function
    int get_year() const;                     // _year getter function

private:
    // Only private variables
    int _day;
    int _month;
    int _year;
};

