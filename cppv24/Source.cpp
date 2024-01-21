#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int age = 23;
	switch (age)
	{
	case 15:
	case 18:
	case 23:
		cout << "Dream on" << endl;
		break;
	default:
		cout << "NEVER BACKDWN" << endl;
		break;
	}
}
