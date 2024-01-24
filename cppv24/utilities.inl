#include <vector>
#include <iostream>

template<typename T>
void printVector(const std::vector<T>& vector)
{
	for (T n : vector)
	{
		std::cout << n << " ";
	}
}