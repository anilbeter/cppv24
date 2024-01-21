#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;
		cout << i << endl;
	}


	cout << "Please type 'anil'" << endl;
	string name;
	cin >> name;
	while (true)
	{
		if (name != "anil")
		{
			cout << "I SAID WRITE ANIL" << endl;
			cin >> name;
		}
		else break;
	}
}
