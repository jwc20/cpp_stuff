/*
Write a program that finds the average of all the numbers entered by the user.
The user will indicate that there are no more numbers by entering a negative
number. We will assume that the user enters only non-negative integers.
*/

#include <iostream>
using namespace std;

int main() {
  int numIn;
  int currentTotal = 0;
  int currentAvg = 0;
  int count = 0;

  cout << "Enter number greater than 0: ";
  cin >> numIn;

  while (numIn > 0) {
    currentTotal += numIn;
    cout << "Enter number greater than 0: ";
    cin >> numIn;
    count += 1;
  }

  if (count == 0) {
    cout << "Invalid" << endl;
  } else {
    currentAvg = currentTotal / count;
    cout << "The current average is: " << currentAvg << endl;
  }

  return 0;
}