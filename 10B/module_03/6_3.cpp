#include <iostream>
using namespace std;

// function prototypes
void drawHorizontalLine();
void draw2VerticalLines();
void drawOneRow();

int main() {
  // function calls
  drawHorizontalLine();
  draw2VerticalLines();
  drawHorizontalLine();
}


// function definitions
void drawHorizontalLine() {
  for (int count=0; count < 6; count++) {
    cout << "X";
  }
  cout << endl;
}

void draw2VerticalLines() {
  for (int rowCount = 0; rowCount < 2; rowCount++) {
    drawOneRow();
  }
}

void drawOneRow() {
  cout << "X";
  for (int spaceCount = 0; spaceCount < 4; spaceCount++){
    cout << " ";
  }
  cout << "X" << endl;
}


