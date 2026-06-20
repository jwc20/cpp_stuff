#include <iostream>
using namespace std;

int main() {
   int totalMeters;
   int numHectometers;
   int numDecameters;
   int numMeters;

   cin >> totalMeters;

   numHectometers = totalMeters / 100;
   numDecameters = (totalMeters % 100) / 10;
   numMeters = totalMeters % 10;

   cout << "Hectometers: " << numHectometers << endl;
   cout << "Decameters: " << numDecameters << endl;
   cout << "Meters: " << numMeters << endl;

   return 0;
}