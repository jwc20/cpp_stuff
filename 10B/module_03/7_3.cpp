#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
  srand(static_cast<unsigned>(time(nullptr)));
  
  for (int i = 0; i < 100; i++) {
    cout << setw(8) << rand() % 101;
    if (i % 5 == 4) {
      cout << endl;
    }
  }
}
