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
	const int padVertical = 10;
	const int padHorizontal = 2;
	// the number of rows and columns to write
	const int rows = padVertical * 2 + 3;
	const string::size_type cols = greeting.size() + padHorizontal * 2 + 2;
	// write a blank line to separate the output from the input
	cout << endl;
	// write rows rows of output
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		while (c != cols) {
			// is it time to write the greeting?
			if (r == padVertical + 1 && c == padHorizontal + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return 0;
}