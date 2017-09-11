#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter a number: ";
	int firstNum;
	cin >> firstNum;
	cout << endl << "Enter another number: ";
	int secondNum;
	cin >> secondNum;
	cout << endl;

	if (firstNum > secondNum) {
		cout << "The first number you entered is larger than the second." << endl;
	}
	else if (firstNum < secondNum) {
		cout << "The second number you entered is larger than the first." << endl;
	}
	else {
		cout << "Your numbers are the same." << endl;
	}
	return 0;
}