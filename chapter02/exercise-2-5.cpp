#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	//make a square
	const int squareSize = 4;
	for (int s = 0; s < squareSize; ++s) {
		string stars(squareSize, '*');
		cout << stars;
		cout << endl;
	}
	cout << endl;

	//make a rectangle
	const int width = 8;
	const int height = 3;
	for (int r = 0; r < height; ++r) {
		string stars(width, '*');
		cout << stars;
		cout << endl;
	}
	cout << endl;

	//make a triangle
	const int triangleSize = 8;
	const int drawSize = triangleSize * 2 - 1;
	for (int r = 0; r < triangleSize; ++r) {
		int numStars = r * 2 + 1;
		int numSpaces = drawSize - numStars;
		string stars(ceil(numStars), '*');
		if (numSpaces > 0) {
			string spacesSide(ceil(numSpaces / 2), ' ');
			cout << spacesSide + stars + spacesSide;
		}
		else {
			cout << stars;
		}
		cout << endl;
	}
	return 0;
}