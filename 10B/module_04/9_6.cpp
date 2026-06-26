/**
 * As an introduction, we will write a function that uses a sorting
 * algorithm named "selection sort".
 * The idea behind the selection sort is that
 * you find the smallest item in the list and swap it with the first item in the
 * list.
 * Then you repeatedly find the smallest item in the list (not counting
 * the items that have already been placed in their correct position) and swap
 * that item with the next item in the list that has not been placed yet.
 * You repeat this process until the list is sorted. For example, if the
 * original list is
 *
 * 5, 7, 3, 2, 9, 0, 14, 8, 10, -2
 * you would begin by determining that the smallest item in the list is -2 and
 * swapping that item with the first item, 5:
 *
 * -2, 7, 3, 2, 9, 0, 14, 8, 10, 5
 * Next you ignore the -2 and determine that the smallest item in the list is 0
 * and swap that item with the first still-unsorted item, which is 7:
 *
 * -2, 0, 3, 2, 9, 7, 14, 8, 10, 5
 * Next you ignore the -2 and the 0 and determine that the smallest item in the
 * list is 2 and swap that item with the first still-unsorted item, which is 3:
 *
 * -2, 0, 2, 3, 9, 7, 14, 8, 10, 5
 * and so on until the list is sorted.
 *
 **/

#include <iostream>
#include <utility>
using namespace std;
const int ARRAY_SIZE = 1000;

void readNumbers(int list[], int& numItems);
int indexOfSmallest(const int list[], int startingIndex, int numItems);
void sort(int list[], int numItems);
void printList(const int list[], int numItems);

int main() {
  int numItems;
  int list[ARRAY_SIZE];

  readNumbers(list, numItems);
  sort(list, numItems);
  printList(list, numItems);

  return 0;
}

void readNumbers(int list[], int& numItems) {
  int count = 0;
  int number;

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

void sort(int list[], int numItems) {
  int smallestIndex;
  int count = 0;

  while (count < numItems) {
    smallestIndex = indexOfSmallest(list, count, numItems);
    swap(list[count], list[smallestIndex]);
    count++;
  }
}

int indexOfSmallest(const int list[], int startingIndex, int numItems) {
  int smallestIndex = startingIndex;
  int index = smallestIndex + 1;

  while (index < numItems) {
    if (list[index] < list[smallestIndex]) {
      smallestIndex = index;
    }
    index++;
  }

  return smallestIndex;
}

void printList(const int list[], int numItems) {
  for (int i = 0; i < numItems; i++) {
    cout << list[i] << " ";
  }
}