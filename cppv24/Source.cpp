#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	// enums are basically named integers
	enum class Mood
	{
		Happy, // defaults to 0
		Angry, // previous + 1
		Sad = 23, // also I can change the int manually
		Bored // 24
	};

	// create a variable of the enum type Mood, and give it a value of Happy
	Mood mood = Mood::Happy;

	int moodInt = (int)mood;

	Mood sadly = Mood::Sad;
	int favNum = (int)sadly;
	cout << "My favorite num is " << favNum << endl;
	// My favorite num is 23


	switch (mood)
	{
	case Mood::Happy:
		cout << "Happy happy happyy!" << endl;
		break;
	case Mood::Angry:
		cout << "I DONT WANT TO SEE YOU!" << endl;
		break;
	case Mood::Sad:
		cout << "Please dont leave" << endl;
		break;
	default:
		cout << "Eh regular" << endl;
		break;
	}


	switch (23)
	{
	case (int)Mood::Happy:
		cout << "Happy happy happyy!" << endl;
		break;
	case (int)Mood::Angry:
		cout << "I DONT WANT TO SEE YOU!" << endl;
		break;
	case (int)Mood::Sad:
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
