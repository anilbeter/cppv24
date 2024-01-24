#include "utilities.h"

int main()
{
	std::vector<int> randomNumbers = generateRandomNum(10);
	sortVector(randomNumbers);
	printVector(randomNumbers);
}
