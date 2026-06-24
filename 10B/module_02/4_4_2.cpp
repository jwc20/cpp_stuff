/*
Problem: Write a program that writes out the numbers from 1 to n, where n is
entered by the user.
*/

#include <iostream>
using namespace std;

int main() {
  int numIn;

  cin >> numIn;

  for (int i = 0; i < numIn; i++) {
    cout << i << endl;
  }

  return 0;
}