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

std::ostream& operator<<(std::ostream& os, const Date& date) {
    std::string month[12] = { "Jan",  "Feb", "March", "April", "May", "June",
                             "July", "Aug", "Sept",  "Oct",   "Nov", "Dec" };
    std::string to_display;
    to_display = "Date : " + month[date.get_month() - 1] + "/" +
        std::to_string(date.get_day()) + "/" +
        std::to_string(date.get_year());
    os << to_display << std::endl;
    return os;
}

