#include <iostream>
#include <memory>
using namespace std;

void printInt(int num)
{
	shared_ptr<int> intSharedPointer = make_shared<int>(5);

	// shared pointer does allow copy. the raw memory will be free, when and only when the last shared pointer that holds it is deleted
	shared_ptr<int> anotherShaderPointer = intSharedPointer;

	// if you want to manually free the memory, do reset
	anotherShaderPointer.reset();

	// use unique pointer whenever possible,
	// in real practice though, shared_pointer is used a lot
	// a texture, any assets that is supposed to be shared between different objects. shard is good choice.
	// unique ptr is more suited for single private ownership.
}

int main()
{
	while (true)
	{
		printInt(5);
	}
}




