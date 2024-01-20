#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int age;
	cout << "Please enter your age." << endl;
	cin >> age;

	if (age == 18)
	{
		cout << "You are just 18" << endl;
	}
	else if (age > 18)
	{
		cout << "You allowed to drink" << endl;
	}
	else 
	{
		cout << "You cant drink" << endl;
	}
}
