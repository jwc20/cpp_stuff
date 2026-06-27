/**
 * A program that reads HAND_SIZE cards from the user,
 * then analyzes the cards and prints out the type of
 * poker hand that they represent.
 *
 * Straight flush, four of a kind, full house, straight,
 * flush, three of a kind, two pairs, pair, high card.
 *
 * Ignore card suits and face cards.
 **/

#include <iostream>
using namespace std;

const int HAND_SIZE = 5;
const int LOWEST_NUM = 2;
const int HIGHEST_NUM = 9;

void readCardNumbers(int hand[]);
void evaluateHand(const int hand[]);
int countOccurrences(const int hand[], int value);
bool containsPair(const int hand[]);
bool containsTwoPair(const int hand[]);
bool containsThreeOfaKind(const int hand[]);
bool containsStraight(const int hand[]);
bool checkForStraight(const int hand[], int index);
bool containsFullHouse(const int hand[]);
bool containsFourOfaKind(const int hand[]);

int main() {
  int hand[HAND_SIZE];

  readCardNumbers(hand);
  evaluateHand(hand);
  return 0;
}

void readCardNumbers(int hand[]) {
  int cardNum;

  cout << "Enter " << HAND_SIZE << " numeric cards, no face cards. Use "
       << LOWEST_NUM << " - " << HIGHEST_NUM << "." << endl;
  for (int count = 0; count < HAND_SIZE; count++) {
    cout << "Card " << count + 1 << ": ";
    cin >> cardNum;
    if ((cardNum <= HIGHEST_NUM) && (cardNum >= LOWEST_NUM)) {
      hand[count] = cardNum;
    } else {
      cout << "Invalid card number or array is full" << endl;
    }
  }
}

void evaluateHand(const int hand[]) {
  if (containsPair(hand)) {
    cout << "Pair!" << endl;
  } else if (containsThreeOfaKind(hand)) {
    cout << "Three of a kind!" << endl;
  } else if (containsFourOfaKind(hand)) {
    cout << "Four of a kind!" << endl;
  } else if (containsFullHouse(hand)) {
    cout << "Full house!" << endl;
  } else if (containsTwoPair(hand)) {
    cout << "Two pair!" << endl;
  } else if (containsStraight(hand)) {
    cout << "Straight!" << endl;
  } else {
    cout << "High card!" << endl;
  }
}

int countOccurrences(const int hand[], int value) {
  int count = 0;
  for (int i = 0; i < HAND_SIZE; i++) {
    if (hand[i] == value) {
      count++;
    }
  }
  return count;
}

bool containsPair(const int hand[]) {
  for (int value = LOWEST_NUM; value <= HIGHEST_NUM; value++) {
    if (countOccurrences(hand, value) == 2) {
      return true;
    }
  }
  return false;
}

bool containsThreeOfaKind(const int hand[]) {
  for (int value = LOWEST_NUM; value <= HIGHEST_NUM; value++) {
    if (countOccurrences(hand, value) == 3) {
      return true;
    }
  }
  return false;
}

bool containsFourOfaKind(const int hand[]) {
  for (int value = LOWEST_NUM; value <= HIGHEST_NUM; value++) {
    if (countOccurrences(hand, value) == 4) {
      return true;
    }
  }
  return false;
}

bool containsTwoPair(const int hand[]) {
  int pairCount = 0;
  for (int value = LOWEST_NUM; value <= HIGHEST_NUM; value++) {
    if (countOccurrences(hand, value) == 2) {
      pairCount++;
    }
  }
  return pairCount == 2;
}

bool containsFullHouse(const int hand[]) {
  return containsPair(hand) && containsThreeOfaKind(hand);
}

bool checkForStraight(const int hand[], int start) {
  for (int value = start; value < start + HAND_SIZE; value++) {
    if (countOccurrences(hand, value) == 0) {
      return false;
    }
  }
  return true;
}

bool containsStraight(const int hand[]) {
  for (int value = LOWEST_NUM; value <= HIGHEST_NUM - (HAND_SIZE - 1);
       value++) {
    if (checkForStraight(hand, value)) {
      return true;
    }
  }
  return false;
}
