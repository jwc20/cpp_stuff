/*
Read the string variables studentName and courseName from input, assuming that the student's name and course may contain multiple words. The first input line contains the student's name and the second input line contains the course.

Ex: If the input is:

Meg Gray
Personal Finance

then the output is:

Meg Gray is studying Personal Finance.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string studentName;
   string courseName;

   getline(cin, studentName);
   getline(cin, courseName);

   cout << studentName << " is studying " << courseName << "." << endl;

   return 0;
}