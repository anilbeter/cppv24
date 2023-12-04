#include <iostream>
import Math;

int main() 
{
	extern int num1;
	int num2{ 20 };
	std::cout << "Best Number is: " << Add(num1, num2) << std::endl;
	std::cout << "25 - 2: " << Subtract(25, 2);

	return 0;
}