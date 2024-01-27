#include <iostream>
#include <vector>
using namespace std;

class Student
{
public: 
	//constructor has the same name as the class and no return value
	Student(const string& studentName, int studentID, int studentYear)
		// better performance than assignment the values in the function body
		: name{ studentName }, ID{ studentID }, year{ studentYear }
	{
		//name = studentName;
		//ID = studentID;
		//year = studentYear;
	}

	// I can create different constructors, as long as  their signature are different.
	Student(const char* rawStringName, int studentID, int studentYear) 
		: Student(string{rawStringName}, studentID, studentYear)
	{

	}

	string name;
	int ID;
	int year;

};

int main()
{
	Student studentOne{ "Anil", 23, 2 };
	Student studentTwo{ "Ocean", 24, 2 };

	// I can store'em in a vector
	vector<Student> students = { studentOne, studentTwo };
	for (Student& s : students)
	{
		cout << s.name << endl;
		// Anil
		// Ocean
	}

}