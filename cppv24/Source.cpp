#include <iostream>
#include <vector>
#include <map>
#include <limits>
using namespace std;

int main()
{
	// check a given number from the user, tell if it is odd or even
	cout << "Helloo to odd or even mini-app." << endl;
	cout << "What number you'd like to check?" << endl;

	int num;
	cin >> num;
	while (!cin.good())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Please enter valid number!\n> ";
		cin >> num;
	}
	if (num % 2 == 0) cout << "you entered " << num << " and it is EVEN" << endl;
	else cout << "you entered " << num << " and it is ODD" << endl;
}
