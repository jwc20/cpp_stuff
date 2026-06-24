/*
Problem: Write a program that adds up all the numbers from 1 to n where n is
entered by the user.
*/

#include <iostream>
using namespace std;

int main() {
  int numIn;
  int total = 0;
  cin >> numIn;

  for (int i = 1; i <= numIn; ++i) {
    total += i;
  }

  // Gaussian
  // total = ((numIn + 1) * numIn) / 2;

  cout << total << endl;

  return 0;
}