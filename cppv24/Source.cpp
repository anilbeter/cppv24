#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	cout << "Hello, name please?" << endl;
	string name;
	cin >> name;
	cout << "And age." << endl;
	int age;
	cin >> age;
	cin.clear();
	cin.ignore(1000, '\n');
	cout << "Your name is " << name << " and " << age << " years old. Gotcha" << endl;
}
