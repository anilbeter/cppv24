#include <iostream>
#include <vector>
#include <map>
#include <limits>
using namespace std;

int main()
{
	// converts miles to kilometers
	// take input from the user, ask a distance in Miles
	// convert that distance to kilometers and cout the value

	const float CONVERSION = 1.609344;
	float defaultMileValue = 0;

	cout << "Hello! Welcome to Miles to Kilometers converter" << endl;
	cout << "Please write distance in miles." << endl;

	cin >> defaultMileValue;
	while (!cin.good())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Error input! Please give a number: \n>>>";
		cin >> defaultMileValue;
	}

	float distanceInKilometers = defaultMileValue * CONVERSION;

	cout << defaultMileValue << " mile equals to " << distanceInKilometers << " kilometers." << endl;
}
