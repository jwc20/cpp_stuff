#include <iostream>
using namespace std;

int main() {
  int hours;
  int paycheck;
  int payRate;

  cout << "Enter hours worked: ";
  cin >> hours;
  do {
    cout << "Enter rate of pay: ";
    cin >> payRate;
    paycheck = hours * payRate;

    cout << "the amount of the paycheck is " << paycheck << " dollars." << endl;
    cout << "Enter hours worked: ";
    cin >> hours;

  } while (hours > 0);

  return 0;
}
