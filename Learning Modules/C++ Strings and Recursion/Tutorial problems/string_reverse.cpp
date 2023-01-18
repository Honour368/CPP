#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string reverse(string s){
	char temp;
	for (int i=0; i<floor(s.length()/2); i++){
		temp = s[i];
		s[i] = s[s.length()-1-i];
		s[s.length()-1-i] = temp;
	}
	return s;
}

string reverse_R(string s){ //splitting the strings into substrings and swapping them by replacing each substring part of the string by the other.
	int length = s.length()-1;
	if (length==1){
		string temp;
		temp = s.substr(1);
		s.replace(1, 1, s.substr(0,1));
		s.replace(0, 1, temp);
		return s;
	}
	else {
		string temp;
		temp = s.substr(length);
		s.replace(length, 1, reverse_R(s.substr(0, length)));
		s.replace(0, length, temp);
		return s;
	}
}

int main()
{
	string s;
	cout << "Please input a string: ";
	getline(cin, s);
	// cin >> s;

	cout << "String in reverse = " << reverse(s) << endl;
	cout << "String in reverse using recursion = " << reverse_R(s) << endl;


	return 0;

}
