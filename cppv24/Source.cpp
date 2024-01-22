#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include <string> 
#include <sstream>
#include <random>
using namespace std;

int main()
{
	// find the smallest number
	vector <int> randomNumbers;

	srand(time(nullptr));

	for (int i = 0; i < 10; i++)
	{
		int number = rand() % 100 - 50; // generate random number between -50 and 50
		// rand() % 100 -> between 0 and 100
		randomNumbers.push_back(number);
		cout << number << " ";
	}

	if (!randomNumbers.empty())
	{
		int smallest = randomNumbers[0];
		for (int num : randomNumbers)
		{
			if (num < smallest) smallest = num;
		}
		cout << "\nsmallest number is: " << smallest << endl;
	}
	else
	{
		cout << "the numbers is empty" << endl;
	}
}
