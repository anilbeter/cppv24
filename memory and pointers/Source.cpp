#include <iostream>
using namespace std;

int main()
{
	int intArray[5] = { 1,2,3,4,5 };
	cout << intArray << endl; // 000000ED8B52F5D8
	cout << *intArray << endl; // 1 (first one in the array)
	cout << *(intArray)+1 << endl; // 2
	cout << *(intArray)+3 << endl; // 4
}




