#include <iostream>
using namespace std;

/*
	The cost to ship a package is a flat fee of 75 cents plus 25 cents per pound. Organize the correct code statements to:
	
		Declare a constant integer variable named CENTS_PER_POUND and initialize the constant with the value 25.

		Read the shipping weight from input and store the weight into shipWeightPounds.

		Assign shipCostCents with the cost of shipping a package weighing shipWeightPounds. 
			Use the constants FLAT_FEE_CENTS and CENTS_PER_POUND.
*/


int main() {
	const int FLAT_FEE_CENTS = 75;
	const int CENTS_PER_POUND = 25;
	int shipWeightPounds; 
	int shipCostCents;

	cout << "Enter the shipping weight: ";
	cin >> shipWeightPounds;


	shipCostCents = FLAT_FEE_CENTS + shipWeightPounds * CENTS_PER_POUND;
	cout << shipCostCents << " cents." << endl;

	return 0;
}