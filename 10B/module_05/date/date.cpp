#include "date.h"
#include <iostream>
using namespace std;

Date::Date() {
  month = 1;
  day = 1;
  year = 1600;
}

Date::Date(int inMonth, int inDay, int inYear) {
  month = inMonth;
  day = inDay;
  year = inYear;
}

void Date::read() {
  char dummy;

  cin >> month;
  cin >> dummy;
  cin >> day;
  cin >> dummy;
  cin >> year;
}

void Date::print() const { cout << month << "/" << day << "/" << year; }

void Date::set(int inMonth, int inDay, int inYear) {
  day = inDay;
  month = inMonth;
  year = inYear;
}

bool Date::comesBefore(const Date& otherDate) const {
  if (year < otherDate.year) {
    return true;
  }

  if (year > otherDate.year) {
    return false;
  }

  if (month < otherDate.month) {
    return true;
  }

  if (month > otherDate.month) {
    return false;
  }

  return day < otherDate.day;
}

void Date::increment() {
  day++;

  if (day > daysInMonth()) {
    day = 1;
    month++;
  }

  if (month > 12) {
    month = 1;
    year++;
  }
}

// This private member function returns the number of days in the month of the
// calling object.

int Date::daysInMonth() const {
  switch (month) {
    case 2:
      if (isLeapYear()) {
        return 29;
      } else {
        return 28;
      }

    case 4:
    case 6:
    case 9:
    case 11:
      return 30;

    default:
      return 31;
  }
}

// This private member function returns true if the year of the calling object
// is a leapyear. Otherwise returns false.

bool Date::isLeapYear() const {
  if (year % 400 == 0) {
    return true;
  }

  if (year % 100 == 0) {
    return false;
  }

  return year % 4 == 0;
}

Date Date::increasedBy(int numDays) const {
  Date tempDate;

  tempDate.set(month, day, year);
  for (int count = 0; count < numDays; count++) {
    tempDate.increment();
  }

  return tempDate;
}