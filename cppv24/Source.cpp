#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	// enums are basically named integers
	enum Mood
	{
		Happy, // defaults to 0
		Angry, // previous + 1
		Sad = 23, // also I can change the int manually
		Bored // 24
	};

	// create a variable of the enum type Mood, and give it a value of Happy
	Mood mood = Happy;

	int moodInt = mood;
	cout << mood << endl; // 0

	Mood sadly = Sad;
	int favNum = sadly;
	cout << "My favorite num is " << favNum << endl;
	// My favorite num is 23


	switch (mood)
	{
	case Happy:
		cout << "Happy happy happyy!" << endl;
		break;
	case Angry:
		cout << "I DONT WANT TO SEE YOU!" << endl;
		break;
	case Sad:
		cout << "Please dont leave" << endl;
		break;
	default:
		cout << "Eh regular" << endl;
		break;
	}


	switch (23)
	{
	case Happy:
		cout << "Happy happy happyy!" << endl;
		break;
	case Angry:
		cout << "I DONT WANT TO SEE YOU!" << endl;
		break;
	case Sad:
		cout << "Please dont leave" << endl;
		break;
	default:
		cout << "Eh regular" << endl;
		break;
	}
	// switch(0) -> Happy
	// switch(1) -> Angry
	// switch(23) -> Sad
	// switch(3,4,5,...) -> "Eh regular"
}
