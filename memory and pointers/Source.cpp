#include <iostream>
using namespace std;

int main()
{
	int intArray[5] = { 1,2,23,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << *(intArray + i) << endl;
	}
	cout << *(intArray + 2) << endl; // 23
}




