#include <iostream>
using namespace std;

int main()
{
	string msg = "hello world";
	int year = 2024;
	float mySanity = 23.24;

	char favChar = 'A';
	char normalChar = 'f';

	bool isDreamComeThrough = true;
	bool isThinkingAboutStop = false;

	cout << favChar << endl;
	cout << normalChar << endl;

	cout << isDreamComeThrough << endl;
	// 1 (true)
	cout << isThinkingAboutStop << endl;
	// 0 (false)

	// 1 tb is 1024 gb
	// 1 gb is 1024 mb
	// 1 mb is 1024 kb
	// 1 kb is 1024 bytes
	// 1 byte is 8 bits
	// 1 bit is 1 bit that is either 0 or 1
	// like 10101010110000110010101

	cout << "the size of int is: " << sizeof(int) << " bytes" << endl;
	// the size of int is: 4 bytes
	cout << "the size of float is " << sizeof(float) << " bytes" << endl;
	// the size of float is: 4 bytes
}