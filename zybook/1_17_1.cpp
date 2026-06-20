#include <iostream>
using namespace std;

/*
Enter integer:
4
You entered: 4
4 squared is 16
And 4 cubed is 64!!
Enter another integer:
5
4 + 5 is 9
4 * 5 is 20
*/

int main() {
   int userNum;
   int userNum2;

   cout << "Enter integer:" << endl;
   cin >> userNum;

   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << userNum * userNum << endl;
   cout << "And " << userNum << " cubed is "
        << userNum * userNum * userNum << "!!" << endl;

   cout << "Enter another integer:" << endl;
   cin >> userNum2;

   cout << userNum << " + " << userNum2 << " is "
        << userNum + userNum2 << endl;

   cout << userNum << " * " << userNum2 << " is "
        << userNum * userNum2 << endl;

   return 0;
}