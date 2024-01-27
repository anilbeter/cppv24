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

	// destructor, called when object is out of scope or deleted if allocated on the heap.
	~Student()
	{
		cout << "student " << name << " is destructured" << endl;
	}

	// member functions
	void SayHello()
	{
		cout << name << " says hello" << endl;
	}

	void IncrementYear()
	{
		year++;
		switch (year)
		{
		case 1:
			cout << name << " is in freshman" << endl;
			break;
		case 2:
			cout << name << " is in 2nd year" << endl;
			break;
		case 3:
			cout << name << " is in junior year" << endl;
			break;
		case 4:
			cout << name << " is in last year" << endl;
			break;
		default:
			cout << name << " graduated" << endl;
			break;
		}
	}

	bool IsGratuated()
	{
		return year > 4;
	}

	// setters
	void SetID(int newID)
	{
		if (newID < 0)
		{
			cout << "Wrong ID value, should be greater than zero!" << endl;
			return;
		}
		ID = newID;
	}

	// getters
	int GetID()
	{
		return ID;
	}

	// member variables
	string name;
	
private:
	// to adjust variables that is private, create setter&getter functions
	int ID;
	int year;


};

int main()
{
	Student student{ "Anil", 234, 2 };
	student.SetID(-23); // Wrong ID value, should be greater than zero!
	cout << student.GetID() << endl; // 234
}