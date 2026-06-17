#include <iostream>
using namespace std;

int main() {
    int dogYears;
    int humanYears;

    cout << "Enter dog years: ";
    cin >> dogYears;
    cout << endl;
    humanYears = 7 * dogYears;

    cout << dogYears;
    cout << " dog years is about ";
    cout << humanYears;
    cout << " human years ";
    cout << endl;

    return 0;
}
