#include <iostream>
using namespace std;


class Date {
  public:
    void print();
    void read();
    void set(int month, int day, int year);
  private:
    int month;
    int day;
    int year;
};

void Date::print()
{
  cout << month << "/" << day << "/" << year;
}

void Date::read() 
{
  char dummy;
  cin >> month >> dummy >> day >> dummy >> year;
}

void Date::set(int inMonth, int inDay, int inYear)
{
  month = inMonth;
  day = inDay;
  year = inYear;
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