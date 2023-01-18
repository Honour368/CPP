#include<iostream>
#include<string>

using namespace std;

bool check(string w, char c){
    return w.find(c, 0)!=-1? 1:0;
}

int main() {
  // char random[20] = {};
  // string input;
  // string msg = "Hello World! ";
  // string name = "My name is Honour";
  // string combo = msg + name + " and I'm 19 years old. " + random;
  // getline(cin, input);
  // // cout << msg << endl;
  //
  // // msg[11]='?';
  // cout << combo << " " << input << endl;

  // string firstName = "Alan";
	// string name = firstName + " Turing";
	// string str1 = "It is sunny. ";
	// string str2 = "";
	// string str3 = "C++ programming.";
	// string str4 = firstName + " is taking " + str3;
  //
	// cout << str1.empty() << endl;
	// cout << str2.empty() << endl;
	// str3.erase(11,4);
 	// cout << str3 << endl;
	// cout << firstName.length() << endl;
	// cout << name.length() << endl;
	// cout << str4 << endl;

  /*To find all occurrences of a substring in a string from the first occurrence
  and also from last occurrence*/
  // string pff;
  // getline(cin, pff);
  // string sub = pff.substr(2,1);
  // int pos = pff.find(sub, 0);
  // int pos1 = pff.rfind(sub, (pff.length()-1));
  //
  // while(pos != string::npos) { //because after the last occurrence, the substring won't be found and -1 will be returned
  //   cout << pos << " ";
  //   pos = pff.find(sub, pos+1);
  // }
  // cout << endl;
  //
  // while(pos1 != -1) {
  //   cout << pos1 << " ";
  //   pos1 = pff.rfind(sub, (pos1)-1);
  // }
  //
  // cout << endl;



  string play = "Tatiana";
  cout << play.length() << endl;
  bool check1= check(play, 'a');
  play.replace(0, play.length(), "Honour Olatunji");
  cout << check1 << endl;

  return 0;
}
