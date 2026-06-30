#include <iostream>
using namespace std;

class Date {
 public:
  void print();
  void read();
  void set(int inMonth, int inDay, int inYear);
  bool comesBefore(Date otherDate);
  void increment();
  Date increasedBy(int numDays);

 private:
  int numDaysInMonth();
  bool isLeapYear();
  int month;
  int day;
  int year;
};

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

  if (year % 100 == 0) {
    return false;
  }

  return year % 4 == 0;
}

void Date::increment() {
  day++;

  if (day > numDaysInMonth()) {
    day = 1;
    month++;  }

  if (month > 12) {
    month = 1;
    year++;
  }
}

Date Date::increasedBy(int numDays) {
  Date tempDate;
  int count;

  tempDate.set(month, day, year);
  for (count = 0; count < numDays; count++) {
    tempDate.increment();
  }

  return tempDate;
}

int main() {
  Date date1;
  cout << "When first declared, date1 is: ";
  date1.print();
  cout << endl;

  date1.set(7, 24, 1949);
  cout << "After being set to 7/24/1949, date1 is: ";
  date1.print();
  cout << endl;

  Date date2;
  cout << "enter a date: ";
  date2.read();
  cout << "you entered: ";
  date2.print();
  cout << endl;

  if (date1.comesBefore(date2)) {
    cout << "date1 comes before date2" << endl;
  } else {
    cout << "date1 does not come before date2" << endl;
  }

  date2.increment();
  cout << "one day later, date2 is: ";
  date2.print();
  cout << endl;

  date1 = date2.increasedBy(12);
  cout << "After setting date1 to equal date2 + 12,";
  cout << "date 2 is still: ";
  date2.print();
  cout << endl;
  cout << "but date1 is now: ";
  date1.print();
  cout << endl;
}