/*
Convert totalDollars to 10-dollar bills, 5-dollar bills, and one-dollar bills, finding the maximum number of 10-dollar bills, then 5-dollar bills, then one-dollar bills.

Ex: If the input is 39, then the output is:

10-dollar bills: 3
5-dollar bills: 1
One-dollar bills: 4
Note: A 10-dollar bill is 10 one-dollar bills. A 5-dollar bill is 5 one-dollar bills.
*/




#include <iostream>
using namespace std;

int main() {
   int totalDollars;
   int numTens;
   int numFives;
   int numOnes;

   cin >> totalDollars;

   numTens = totalDollars / 10;
   totalDollars -= numTens * 10;
   
   numFives = totalDollars / 5;
   totalDollars -= numFives * 5;
   
   numOnes = totalDollars;
   

   cout << "10-dollar bills: " << numTens << endl;
   cout << "5-dollar bills: " << numFives << endl;
   cout << "One-dollar bills: " << numOnes << endl;

   return 0;
}