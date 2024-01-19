#include <iostream>
using namespace std;

int main()
{
	string colors[] = { "blue", "red", "black" };

	cout << colors[0] << endl;;
	// blue

	colors[0] = "ocean blue";
	cout << colors[0] << endl;;
	// ocean blue;

	// size of an array
	cout << sizeof(colors) / sizeof(string) << endl;
	// 3

	// arrays are fixed size!
	// THIS IS NOT VALID:
	// colors[3] = "purple";
	// cout << colors[3] << endl;
}