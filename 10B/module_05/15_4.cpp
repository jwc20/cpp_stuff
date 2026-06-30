#include <iostream>
using namespace std;

class Date {
 public:
  void print();
  void read();
  void set(int month, int day, int year);
  bool comesBefore(Date otherDate);
  void increment();
  bool isLeapYear();
  int numDaysInMonth();

 private:
  int month;
  int day;
  int year;
};

int Date::numDaysInMonth() {
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

bool Date::isLeapYear() {
  if (year % 400 == 0) {
    return true;
  }
  if (year % 200 == 0) {
    return false;
  }
  return year % 4 == 0;
}

void Date::increment() {
  day++;
  if (day > numDaysInMonth()) {
    day = 1;
    month++;
  }
  if (month > 12) {
    month = 1;
    year++;
  }
}

void Date::print() { cout << month << "/" << day << "/" << year; }

void Date::read() {
  char dummy;
  cin >> month >> dummy >> day >> dummy >> year;
}

void Date::set(int inMonth, int inDay, int inYear) {
  month = inMonth;
  day = inDay;
  year = inYear;
}

bool Date::comesBefore(Date otherDate) {
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

int main() {
  Date date1;
  Date date2;

  date1.set(4, 27, 1947);
  cout << "date1 should be 4/27/1947: ";
  date1.print();
  cout << endl;
  cout << "enter a date (M/D/Y): ";
  date2.read();
  cout << "the date you entered was: ";
  date2.print();
  cout << endl;
}