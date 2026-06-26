#include <iostream>
using namespace std;

int main() {

  int count = 0;
  int inputNum;
  int arr[1000];
  int arrLength = 0;

  cout << "Enter a number greater than 0: ";
  cin >> inputNum;

  while (inputNum > 0) {
    // store number
    arr[count] = inputNum;
    count++;

    cout << "Enter a number greater than 0: ";
    cin >> inputNum;
  }

  arrLength = count;
  for (count = arrLength - 1; count >= 0; count--) {
    cout << arr[count] << endl;
  }
 

  return 0;
}