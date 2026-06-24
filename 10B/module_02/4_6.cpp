/*
Write a program which finds the smallest of all the numbers entered by the user.
The user will enter only non-negative integers, and will indicate that she is
done entering numbers by typing a negative number.
*/

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int numIn;
  int smallest = INFINITY;

  cout << "Enter number greater than 0: ";
  cin >> numIn;

  while (numIn > 0) {
    if (numIn < smallest) {
      smallest = numIn;
    }

    cout << "Enter number greater than 0: ";
    cin >> numIn;
  }

  if (smallest < 0) {
    cout << "There is no smallest because you "
         << "did not enter any numbers!";
  } else {
    cout << "The smallest number you entered was " << smallest << endl;
  }
  return 0;
}