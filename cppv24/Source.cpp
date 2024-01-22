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
	// sorting numbers smallest to biggest challenge (called bubble sort algorithm)
	vector<int> randomNums;
	srand(time(nullptr));
	for (int i = 0; i < 5; i++)
	{
		int num = rand() % 100;
		randomNums.push_back(num);
		cout << num << " ";
	}
	
	cout << "\n------------------" << endl;
	//reorder the number from the smallest to the biggest. Sorting
	// Bubble sort - SLOW
	for (int i = 0; i < randomNums.size(); i++)
	{
		for (int j = i + 1; j < randomNums.size(); ++j)
		{
			if (randomNums[i] > randomNums[j])
			{
				swap(randomNums[i], randomNums[j]);
			}
		}
	}
	for (int n : randomNums)
	{
		cout << n << " ";
	}

	// other algorithms
	/*
	quick sort -> super fast
	binary heap sort
	insertion sort
	merge sort
	*/
}
