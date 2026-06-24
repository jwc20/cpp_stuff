/**
 * counts the number of times the ">=" operator occurs in a file.
 * allows the user to enter multiple files to be processed.
 **/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  char prevchar;
  char currchar;
  int count;
  string filename;
  ifstream infile;

  cout << "Enter the name of a file (or \"quit\"): ";
  cin >> filename;

  while (filename != "quit") {
    infile.open(filename);

    if (!infile) {
      cout << "couldn't open file." << endl;
    } else {
      count = 0;
      infile.get(prevchar);
      infile.get(currchar);

      while (infile) {
        if (prevchar == '>' && currchar == '=') {
          count++;
        }

        prevchar = currchar;
        infile.get(currchar);
      }
      cout << "It occured " << count << " times." << endl;
    }

    infile.clear();
    infile.close();

    cout << "Enter the name of a file (or \"quit\"): ";
    cin >> filename;
  }
}