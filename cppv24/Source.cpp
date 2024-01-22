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

vector<int> sortNumsSmallerToBiggest(vector<int> nums)
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
	vector<int> sortedVec;
	for (int n : nums)
	{
		sortedVec.push_back(n);
		cout << n << " ";
	}
	return sortedVec;
}

int main()
{
	helloMsg();
	// sorting numbers smallest to biggest challenge (called bubble sort algorithm)


	vector<int> randomNums = generateRandomNum(15);
	cout << "\n------------------" << endl;
	//reorder the number from the smallest to the biggest. Sorting
	// Bubble sort - SLOW
	sortNumsSmallerToBiggest(randomNums);

	// other algorithms
	/*
	quick sort -> super fast
	binary heap sort
	insertion sort
	merge sort
	*/
}
