#include <iostream>
#include <vector>
using namespace std;

class Student
{
public: 
	//constructor has the same name as the class and no return value
	Student(const string& studentName, int studentID, int studentYear)
		// better performance than assignment the values in the function body
		: name{ new string{studentName} }, ID{ studentID }, year{ studentYear }
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

	// destructor, called when object is out of scope or deleted if allocated on the heap.
	~Student()
	{
		cout << "student " << *name << " is destructured" << endl;
		delete name;
	}

	string* name;
	int ID;
	int year;

};

int main()
{
	Student student{ "Anil", 234, 2 };
}