#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	const string greeting = "Hello, " + name + "!";
	cout << "Please enter the vertical padding you desire: ";
	int padVertical;
	cin >> padVertical;
	cout << "Please enter the horizontal padding you desire: ";
	int padHorizontal;
	cin >> padHorizontal;
	// the number of rows and columns to write
	const int rows = padVertical * 2 + 3;
	const string::size_type cols = greeting.size() + padHorizontal * 2 + 2;
	// write a blank line to separate the output from the input
	cout << endl;
	// write rows of output
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		if (r == padVertical + 1) {
			string spaces(padHorizontal, ' ');
			cout << "*" + spaces + greeting + spaces + "*";
		}
		else if (r == 0 || r == rows - 1) {
			string stars(cols, '*');
			cout << stars;
		}
		else {
			string spaces(cols - 2, ' ');
			cout << "*" + spaces + "*";
		}
		cout << endl;
	}
	return 0;
}