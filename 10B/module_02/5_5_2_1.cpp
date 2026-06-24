/**
 * makes a copy of a file.
**/

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream infile("data.txt");
  if (!infile) {
    cout << "Could not open file" << endl;
  } else {
    ofstream outfile("newfile.txt");
    char ch;
    infile.get(ch);
    while (infile) {
      outfile << ch;
      infile.get(ch);
    }

    infile.close();
    outfile.close();
  }

  return 0;
}