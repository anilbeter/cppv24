#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// array can hold elements of any type
	// array size is fixed
	int IDs[] = { 23, 45, 99 };

	// {...} is called initializer
	vector<int> IDVector = { 23, 45, 99 };

	// get first item from array & vector
	cout << "the first of ID is: " << IDs[0] << endl;
	cout << "the first of IDVector is: " << IDVector[0] << endl;

	// get last item from array
	cout << "the last one of IDs is: " << IDs[((sizeof(IDs) / sizeof(int)) - 1)] << endl;

	// get last item from vector
	cout << "the last one of IDVector is: " << IDVector.back() << endl;

	// size of array
	cout << "the size of ID array: " << sizeof(IDs) / sizeof(int) << endl;
	// size of vector
	cout << "the size of IDVector: " << IDVector.size() << endl;

	// vector can grow or shrink unlike array
	// grow)
	IDVector.push_back(1);
	for (int i = 0; i < IDVector.size(); i++)
	{
		cout << IDVector[i] << endl;
		/*
		23
		45
		99
		1
		*/
	}

	// get first item of vector
	cout << "the first item of vector is: " << IDVector.front() << endl;
	// the first item of vector is: 23
	
	// get last item of vector
	cout << "the last item of vector is: " << IDVector.back() << endl;
	// the last item of vector is: 1

	// insert
	IDVector.insert(IDVector.begin(), 123);
	cout << "the first item of vector is: " << IDVector.front() << endl;
	// the first item of vector is: 123

	// insert to specific place in vector
	IDVector.insert(IDVector.begin() + 1, 999);
	for (int i = 0; i < IDVector.size(); i++)
	{
		cout << IDVector[i] << endl;
		/*
		123
		999
		23
		45
		99
		1
		*/
	}

	// remove things
	IDVector.erase(IDVector.begin());
}