/*
Question Type Loops
*/

#include <iostream>
using namespace std;

int main() {
  int hours;
  int paycheck;
  int payRate;
  char response;

  cout << "Is there an employee to process (Y/N)? ";
  cin >> response;

  while (response == 'y') {
    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter rate of pay: ";
    cin >> payRate;

    if (hours <= 50) {
      paycheck = hours * payRate;
    } else {
      paycheck = 40 * payRate + (hours - 40) * payRate * 1.5;
    }

    cout << "The amount of paycheck is " << paycheck << " dollars." << endl;

    cout << "Is there another employee to prcess (Y/N)?";
    cin >> response;
  }
  return 0;
}