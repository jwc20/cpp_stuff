#include <iostream>
using namespace std;

int main() {
   int x;

   cin >> x;

   if (x < 10) {
      cout << "a";
   }
   else if (x == 10) {
      cout << "v";
   }
   else if (x <= 25) {
      cout << "h";
   }
   else {
      cout << "i";
   }

   cout << endl;

   return 0;
}