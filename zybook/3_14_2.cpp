/*
Given string inputString on one line and integers idx1 and idx2 on the next line, change the character at index idx1 of inputString to the character at index idx2.

Ex: If the input is:

gecko
3 1

then the output is:

geceo

Note: Assume the length of string inputString is greater than or equal to both idx1 and idx2.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputString;
	int idx1;
	int idx2;

   getline(cin, inputString);
	cin >> idx1;
	cin >> idx2;

   // char newIdx1Char = inputString.at(idx1);
   // char newIdx2Char = inputString.at(idx2);
   // inputString.at(idx1) = newIdx2Char;

   inputString.at(idx1) = inputString.at(idx2);

   cout << inputString << endl;

   return 0;
}