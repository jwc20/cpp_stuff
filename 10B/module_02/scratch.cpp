#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream infile;
  char ch;

  infile.open("data.txt");

  if (!infile) {
    cout << "Couldn't open the file." << endl;
  } else {
    infile.get(ch);
    while (infile) {
      cout << ch << endl;
      infile.get(ch);
    }

    infile.close();
  }

  return 0;
}