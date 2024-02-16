#include <iostream>
#include "standaloneExitChoice.h"
using namespace std;

int main() {

	int grade1, grade2, grade3, grade4;

	cout << "This program will calculate the average grade from four tests.\n";
	cout << "\nPlease enter the grade from your first test: ";
	cin >> grade1;

	cout << "\nPlease enter the grade from your second test: ";
	cin >> grade2;

	cout << "\nPlease enter the grade from your third test: ";
	cin >> grade3;

	cout << "\nPlease enter the grade from your fourth test: ";
	cin >> grade4;

	cout << "\nThe average grade of your four tests is: " << (float)(grade1 + grade2 + grade3 + grade4) / 4 << endl;

	cout << "\nPlease type 'a' to run the program again and 'e' to exit: ";

	stdln::key1 = 'a';
	stdln::key2 = 'A';
	stdln::okey1 = 'e';
	stdln::okey2 = 'E';
	stdln::exitchoice();
}