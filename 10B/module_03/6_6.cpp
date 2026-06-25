#include <iostream>
using namespace std;

void drawHorizontalLine(int numXs);
void draw2VerticalLines(int numSpaces, int numRows);
void drawOneRow(int numSpaces);


int main() {
  int width;
  int height;

  cout << "Enter the width: ";
  cin >> width;

  cout << "Enter the height: ";
  cin >> height;

  drawHorizontalLine(width);
  draw2VerticalLines(width - 2, height - 2);
  drawHorizontalLine(width);
}

void drawHorizontalLine(int numXs) {
  for (int count = 0; count < numXs; count++) {
    cout << "X";
  } 
  cout << endl;
}

void draw2VerticalLines(int numSpaces, int numRows) {
  for (int rowCount = 0; rowCount < numRows; rowCount++) {
    drawOneRow(numSpaces);
  }
}

void drawOneRow(int numSpaces) {
  cout << "X";
  for (int spaceCount = 0; spaceCount < numSpaces; spaceCount++) {
    cout << " ";
  }
  cout << "X" << endl;  
}
