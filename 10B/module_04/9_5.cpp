#include <iostream>
#include <utility>  // for swap()
using namespace std;

void readNumbers(int list[], int& numItems);
void reverseList(int list[], int numItems);
void printNumbers(const int list[], int numItems);

const int ARRAY_SIZE = 100;

int main() {
  int numItems;
  int list[ARRAY_SIZE];

  readNumbers(list, numItems);
  reverseList(list, numItems);
  printNumbers(list, numItems);
}

void readNumbers(int list[], int& numItems) {
  int number;
  int count = 0;

  cout << "Enter a number (-1 to quit): ";
  cin >> number;

  while ((number != -1) && (count < ARRAY_SIZE)) {
    list[count] = number;
    count++;
    if (count < ARRAY_SIZE) {
      cout << "Enter a number (-1 to quit): ";
      cin >> number;
    } else {
      cout << "the array is now full." << endl;
    }
  }

  numItems = count;
}

void reverseList(int list[], int numItems) {
  int left = 0;
  int right = numItems - 1;

  while (left < right) {
    swap(list[left], list[right]);
    left++;
    right--;
  }
}

void printNumbers(const int list[], int numItems) {
  for (int i = 0; i < numItems; i++) {
    cout << list[i] << " ";
  }
}
