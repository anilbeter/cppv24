#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include <string> 
#include <sstream>
#include <random>
using namespace std;

void printMsg(string msg, bool newLine)
{
	cout << msg << endl;
	if (newLine) cout << endl;
}

void helloMsg()
{
	printMsg("hello world!", true);
}

vector<int> generateRandomNum(int numberOfNumber)
{
	vector<int> randomNums;
	srand(time(nullptr));
	for (int i = 0; i < numberOfNumber; i++)
	{
		int num = rand() % 100;
		randomNums.push_back(num);
		cout << num << " ";
	}
	return randomNums;
}

vector<int> sortVector(vector<int> nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[i] > nums[j])
			{
				swap(nums[i], nums[j]);
			}
		}
	}
	return nums;
}

int main()
{
	helloMsg();
	// sorting numbers smallest to biggest challenge (called bubble sort algorithm)


	vector<int> randomNums = generateRandomNum(15);
	cout << "\n------------------" << endl;
	//reorder the number from the smallest to the biggest. Sorting
	// Bubble sort - SLOW
	sortVector(randomNums);


	vector<int> sortedVec = sortVector(randomNums);
	for (int n : sortedVec)
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
