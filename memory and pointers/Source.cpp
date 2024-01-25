#include <iostream>
using namespace std;

void printInt(int num)
{
	cout << num << endl;
	{
		int c = num;
		cout << c << endl;
	}

	int d = 23;
}

int main()
{
	int x = 5; // x is created on stack memory
	int* heapX = new int{ 5 }; // an int variable with value 5 created on the heap. it's addres is stored in the stack variable heapX(which is a pointer). 
	delete heapX;

	printInt(x);

	// heap can be used when need big storage.
	// the memory allocated is not automatically removed unlike stack.
	// to manually free the memory, you need to call delete on the pointer
}




