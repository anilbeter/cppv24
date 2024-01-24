#include <vector>

// declaration, says this thing called generateRandomNum exists, and it takes int argument and returns a vector<int>
std::vector<int> generateRandomNum(int randomNumbers);

int main()
{
	std::vector<int> randomNumbers = generateRandomNum(10);
}
