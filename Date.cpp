/**
  * @File: date.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-03 09:14:04
  * @Last Modified time: 2022-10-03 15:14:54
  *
  * @Description: Date class Implementation
  */


#include "date.h"
#include <assert.h> 
#include <string>


Date::Date(int year, int month, int day) : _year(year), _month(month), _day(day) {
    bool status = isDate(year, month, day);
    assert(status && "Date is not valid");
}

int Date::year() const {
    return _year;
}

int Date::month() const {
    return _month;
}

int Date::day() const {
    return _day;
}

void Date::updateYear(int year) {
    bool status = isDate(year, _month, _day);
    assert(status == true && "New month is not valid");
    _year = year;
}

void Date::updateMonth(int month) {
    bool status = isDate(_year, month, _day);
    assert(status == true && "New month is not valid");
    _month = month;
}

void Date::updateDay(int day) {
    bool status = isDate(_year, _month, day);
    assert(status == true && "New day is not valid");
    _day = day;
}

void Date::next() {
    if ((_month == 12) && (_day == 31)) {
        _day = 1;
        _month = 1;
        _year++;
    }
    else if (_day == getDaysInMonth(_year, _month)) {
        _day = 1;
        _month++;
    }
    else {
        _day++;
    }
}

void Date::back() {
    if ((_month == 1) && (_day == 1)) {
        _day = 31;
        _month = 12;
        _year--;
    }
    else if (_day == 1) {
        _month--;
        _day = getDaysInMonth(_year, _month);
    }
    else {
        _day--;
    }
}

/**
 *
 * Helper functions
 *
*/

bool isDate(int year, int month, int day) {
    if ((year < 0 || year > 2100)) return false;
    if ((month < 1) || (month > 12)) return false;
    if (day < 1) return false;
    if (day > getDaysInMonth(year, month)) return false;

    return true;
}

bool isYearbissextiles(int year) {
    if ((year % 100 == 0)) {
        if ((year % 400 == 0))
            return false;
        else
            return true;

    }
    else if ((year % 4 == 0))
        return true;
    else
        return false;
}

int getDaysInMonth(int year, int month) {
    assert(((month >= 1) && (month <= 12)) && "Month is not valid");
    if ((isYearbissextiles(year) && month == 2)) return 29;
    if ((!isYearbissextiles(year) && month == 2)) return 28;
    if ((month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)) return 31;
    return 30;
}

int dayOfYear(Date d) {
    auto day = 0;
    for (auto i = 1; i < d.month(); i++) {
        day += getDaysInMonth(d.year(), i);
    }
    day += d.day();
    return day;
}

std::string toString(Date d) {
    return std::to_string(d.day()) + "/" + std::to_string(d.month()) + "/" + std::to_string(d.year());
}
