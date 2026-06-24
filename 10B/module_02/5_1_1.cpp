#include <iostream>
using namespace std;

int main() {
  int hours;
  int paycheck;
  char response;
  int payRate;

  do {
    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter rate of pay: ";
    cin >> payRate;

    paycheck = hours * payRate;

    cout << "the amount of the paycheck is " << paycheck << " dollars." << endl;

    cout << "Is there another employee to process (Y/N)? ";
    cin >> response;

  } while (response == 'y');

  return 0;
}
