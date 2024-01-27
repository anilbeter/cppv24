#include <iostream>
#include <vector>
using namespace std;

class Student
{
public: // accessible out of class
	string name;
	int ID;
	int year;

};

int main()
{
	Student studentOne;
	studentOne.name = "Anil";
	studentOne.ID = 23;
	studentOne.year = 2;

	Student studentTwo;
	studentTwo.name = "Ocean";
	studentTwo.ID = 24;
	studentTwo.year = 2;

	// I can store'em in a vector
	vector<Student> students = { studentOne, studentTwo };
	for (Student& s : students)
	{
		cout << s.name << endl;
		// Anil
		// Ocean
	}

}