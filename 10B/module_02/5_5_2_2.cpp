/**
 * counts the number of times the ">=" operator occurs in a file.
 **/

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char prevchar;
  char currchar;
  int count = 0;

  ifstream infile("data.txt");
  if (!infile) {
    cout << "couldn't open file." << endl;
  } else {
    infile.get(prevchar);
    infile.get(currchar);
    while (infile) {
      if (prevchar == '>' && currchar == '=') {
        count++;
      }
      prevchar = currchar;
      infile.get(currchar);
    }
    infile.close();
    cout << "It occured " << count << " times." << endl;
  }

  return 0;
}