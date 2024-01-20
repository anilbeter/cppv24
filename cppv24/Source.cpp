#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	//for
	int nums[] = { 1,2,3,4,5 };
	for (int i = 0; i < sizeof(nums) / sizeof(int); i++)
	{
		cout << nums[i] << endl;
	}

	//foreach
	for (int n : nums)
	{
		cout << n << endl;
	}
}
