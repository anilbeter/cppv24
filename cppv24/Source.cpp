#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	// JavaScript objectler gibi, key-value iliþkisi var
	map<int, string> students{ {2345, "Anil"}, {99, "Martha"}, {4529, "Ilyada"}, {2023, "Chris"}};

	cout << students[2345] << endl;
	// Anil
	cout << students[4529] << endl;
	// Ilyada

	// Update a key
	cout << students[99] << endl;
	// Martha
	students[99] = "STOP!";
	cout << students[99] << endl;
	// STOP!

	// Add new key
	students.insert({ 9, "Ocean" });
	cout << students[9] << endl;
	// Ocean

	// Remove stuff
	students.erase(9);

}