#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	// pointer. store the address of where x is
	int* xPtr = &x; 
	void* xPtr2 = &x; // a pointer stores and only stores a memory address. don't hold data about the type it points to

	// long story short, data type not a big deal in pointers
	float floatNum = 9;
	float* myFloatPointer = &floatNum;
	cout << myFloatPointer << endl; // 000000F7A5F5F614
	cout << *myFloatPointer << endl; // 9

	cout << xPtr << endl; // 000000B089CFFC04
	cout << xPtr2 << endl; // 000000B089CFFC04

	*xPtr = 23; // dereferencing. access the value in the memory address
	
	cout << xPtr << endl; // 000000B089CFFC04
	cout << x << endl; // 23
	cout << *xPtr << endl; // 23

	cout << *(int*)xPtr2 << endl;
}