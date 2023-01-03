#include "Date.h"

Date::Date() : _day(1), _month(1), _year(2000)
{

}

//Parametrizied constructor, reducer constructor
Date::Date(int day, int month, int year) : _day(day), _month(month), _year(year) {

};

int Date::get_day() const {
    return _day;
}

int Date::get_month() const {
    return _month;
}

int Date::get_year() const {
    return _year;
};

