#include <iostream>
using namespace std;

int main() {
   int inputNum;
   int hundredsDigit;
   int tmpVal;

   cin >> inputNum;
   hundredsDigit = (inputNum / 100) % 10;

   cout << "Value in hundreds place: " << hundredsDigit << endl;
}