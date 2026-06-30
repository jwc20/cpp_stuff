
#ifndef DATE_H
#define DATE_H

/*

The Date class can be used to create objects that store a date, including month,
day, and year. The following functions are available:

Date();
  post: The calling object has been created and initialized to January 1, 1600

Date(int inMonth, int inDay, int inYear);
  post: The calling object has been created and initialized so that the month is
inMonth, the day is inDay, and the year is inYear.

void set(int inDay, int inMonth, int inYear);
  post: The calling object has been modified so that the month is inMonth, the
day is inDay, and the year is inYear.

void print() const;
  post: The calling object has been printed to the console window in the format
M/D/Y.

void read();
  post: The calling object has been initialized to the data entered at the
console window. The date must be entered in the format M/D/Y.

bool comesBefore(const Date& otherDate) const;
  post: Returns true if the calling object comes before the parameter
"otherDate".  Otherwise returns false.

void increment();
  post: The calling object has been advanced by one day.

Date increasedBy(int numDays) const;
  post: Returns the Date determined by starting with the calling object and
advancing the day numDays times.

*/

class Date {
 public:
  Date();
  Date(int inMonth, int inDay, int inYear);
  void set(int inDay, int inMonth, int inYear);
  void print() const;
  void read();
  bool comesBefore(const Date& otherDate) const;
  void increment();
  Date increasedBy(int numDays) const;

 private:
  int daysInMonth() const;
  bool isLeapYear() const;
  int day;
  int month;
  int year;
};

#endif