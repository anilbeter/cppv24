#include <iostream>
#include <memory>
using namespace std;

void printInt(int num)
{

}

int main()
{
	unique_ptr<int> uniquePtr = make_unique<int>(5);
	cout << uniquePtr << endl; // 000001F9403F7540
	cout << *uniquePtr << endl; // 5
	// unique pointer very similar to raw pointer about usage
	// its SMART pointer because it automatically delete or free the memory when it goes out of scope

	unique_ptr<int> anotherUniquePtr = move(uniquePtr);
	cout << *anotherUniquePtr << endl; // 5
	// unique ptr doesn't allow copy, but allows move. the move() function method transfers the ownership of the raw pointer internally to the other one
}




