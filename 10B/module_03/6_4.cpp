#include <iostream>
using namespace std;

void drawHorizontalLine(int numXs);
void draw2VerticalLines(int numXs, int numRows);
void drawOneRow(int numXs);


int main() {
  int width;
  int height;

  cout << "Enter the width: ";
  cin >> width;

  cout << "Enter the height: ";
  cin >> height;

  drawHorizontalLine(width);
  draw2VerticalLines(width, height);
  drawHorizontalLine(width);
}

void drawHorizontalLine(int numXs) {
  for (int count = 0; count < numXs; count++) {
    cout << "X";
  } 
  cout << endl;
}

void draw2VerticalLines(int numXs, int numRows) {
  for (int count = 0; count < numRows - 2; count++) {
    drawOneRow(numXs);
  }
}

void drawOneRow(int numXs) {
  cout << "X";
  for (int spaces = 0; spaces < numXs - 2; spaces++) {
    cout << " ";
  }
  cout << "X" << endl;  
}
