#include <iostream>
#include <string>

using namespace std;


int main()
{
	string text = "radar";
	int length = 5;			// string length

	bool isPalindrome = true;

	for (int i = 0; i < length/2; ++i) 
	{
		if (text[i] != text[length-1-i]) 
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome)
		cout << text << " is a palindrome" << endl;
	else
		cout << text << " is not a palindrome" << endl;

	return 0;
}
