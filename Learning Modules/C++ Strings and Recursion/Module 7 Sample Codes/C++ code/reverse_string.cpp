#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text = "apple";
	string rev;
	int length = 5;			// string length

	for (int i = length-1; i >= 0; --i) 
	{
		rev += text[i];
	}

	cout << "The reverse of " << text << " is " << rev << endl;
	return 0;
}
