#include <iostream>
#include <memory>
using namespace std;

void printInt(int num)
{
	shared_ptr<int> sharedPtr = make_shared<int>(5);

	// weak pointer
	// this creates an empty weak ptr
	weak_ptr<int> emptyWeakPtr;

	// this creates a weak pointer that holds the same memory address of the sharedPtr.
	weak_ptr<int> intWeakPtrConjunctionToShared = sharedPtr;
}

int main()
{
	while (true)
	{
		printInt(5);
	}
}




