#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include <string> 
#include <sstream> 
using namespace std;

int main()
{
	// given the text, find the repeated word
	string text = R"""(
In the peaceful town of Willowbrook, there lived a curious girl named Lily.One day, she stumbled upon a dusty book near an old oak tree, revealing a map to the legendary Crystal Grove hidden in the forest.

Driven by excitement, Lily embarked on a magical journey through the enchanted woods.Along the way, she encountered talking animals and made new friends.The forest became a kaleidoscope of colors with butterflies dancing in the sunlight.

After a day of exploration, Lily reached the Crystal Grove, a mesmerizing place adorned with crystals of every hue.She picked a small, shimmering crystal as a keepsake, and a warm glow surrounded her, granting her the ability to spread joy and wonder.

Returning to Willowbrook, Lily shared her enchanting adventure, gifting crystals to friends and neighbors.The town transformed, infused with a magical energy.Lily's simple story became a legend, inspiring others to embrace the magic in everyday life, ensuring the enchantment of the Crystal Grove lived on in their hearts.)""";
	
	stringstream ss;
	ss << text;
	string nextStr = "";

	// tüm stringleri(kelimeleri) tek tek yazdýrma:
	while (ss >> nextStr)
	{
		cout << nextStr << endl;
		/*
		* TODO1)
		* Bazý outputlar:
		* forest,
		* happen.Lily's
		* gibi noktalama iþaretleri kelime yapýsýný bozuyor, bunlarý düzeltmem gerek
		* TODO2)
		* the ve The gibi büyük-küçük harf farklarý var, bunu düzeltmem gerek
		*/
	}
}
