/*
   This program prompts the user to input a sequence of characters and outputs the number of vowels
*/

#include <iostream>
using namespace std;

bool isVowel(char a) {
  if (a == 'A' || a == 'a' || a == 'E' || a=='e' || a == 'I' || a == 'i' || a=='O' || a=='o' || a=='U'||a=='u')
    return true;
  else
    return false;
}

int main()
{
	int n;
	int numVowel = 0;
	char c;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		if (isVowel(c))
			numVowel++;
	}

	cout << "Number of vowels = " << numVowel << endl;

	return 0;
}
