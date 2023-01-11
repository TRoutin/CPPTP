#pragma once
#include <iostream>
#include <vector>
#include <string>

class Date
{
public:
    Date();
    Date(const Date& autre);
    Date(int day, int month, int year); // Constructor (parametrized)
    int get_day() const;                      // _day getter function
    int get_month() const;                    // _month getter function
    int get_year() const;                     // _year getter function

    void setday(int day);
    void setmonth(int month);
    void setyear(int year);

    Date& operator=(const Date& autre);


private:
    // Only private variables
    int _day;
    int _month;
    int _year;
};

std::ostream& operator<<(std::ostream& os, const Date& date);
