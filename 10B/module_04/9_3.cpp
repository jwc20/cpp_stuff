#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

void readNumbers(int list[], int& numItems);
int findSmallest(const int list[], int numItems);
void printListExcept(const int list[], int numItems, int except);

int main() {
  int list[ARRAY_SIZE];
  int smallest;
  int numItems;

  readNumbers(list, numItems);
  cout << "The numbers you entered (omitting the smallest): " << endl;
  printListExcept(list, numItems, findSmallest(list, numItems));
}

// ---------------------------------------------------------------

void readNumbers(int list[], int& numItems) {
  int count = 0;
  int number;

  cout << "Enter a number greater than 0: ";
  cin >> number;
  while (number >= 0 && count < ARRAY_SIZE) {
    list[count] = number;
    count++;
    if (count < ARRAY_SIZE) {
      cout << "Enter a number greater than 0: ";
      cin >> number;
    } else {
      cout << "The array is now full." << endl;
    }
  }
  numItems = count;
}

int findSmallest(const int list[], int numItems) {
  int smallest = list[0];
  for (int i = 0; i < numItems; i++) {
    if (smallest > list[i]) {
      smallest = list[i];
    }
  }
  return smallest;
}

void printListExcept(const int list[], int numItems, int except) {
  for (int i = 0; i < numItems; i++) {
    if (list[i] != except) {
      cout << list[i] << " ";
    }
  }
}
