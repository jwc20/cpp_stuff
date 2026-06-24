
#include <iostream>
using namespace std;

int main() {
   int x;

   x = 4;
   if ( !((x > 2) || (x < 5)) ) {
      cout << "a" << endl;
   }
   if ( (x > 3) && (x < 9) ) {
      cout << "b" << endl;
   }
   cout << "c" << endl;
   
   return 0;
}