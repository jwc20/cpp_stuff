#include <iostream>
using namespace std;

int main() {
	const double SPEED_OF_SOUND = 761.207;
	const double SECONDS_PER_HOUR = 3600.0;

	double secondsBetween;
	double timeInHours;	
	double distInMiles;

	cout << "Enter seconds between lightning and thunder: ";
	cin >> secondsBetween;

	timeInHours = secondsBetween / SECONDS_PER_HOUR;
	distInMiles = timeInHours * SPEED_OF_SOUND;

	cout << "Lightning strike was approximately: " << endl;
	cout << distInMiles << " miles away." << endl;

	return 0;
}