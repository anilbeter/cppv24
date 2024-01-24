#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	// reference
	cout << &x << endl; // 000000DB1B7DF5A4 (place that in memory)

	int& anotherX = x;
	cout << anotherX << endl; // 5
	cout << &anotherX << endl; // 000000DB1B7DF5A4

	anotherX = 23;
	cout << x << endl; // 23
}