#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cstdlib>

using namespace std;

int main() {
  string input;
  string word;
  ifstream fin;
  fin.open("Problem7.txt");
  if (fin.fail()) {
    cout << "Error in opening file" << endl;
    exit(1);
  }
  while (fin >> input){  //to read till end of file
    word.append(input);
    word.append(" "); //this is because fin tends to ignore white spaces (e.g space, tabs and so on.)
  }

  int count=0;
  for (int i=0; i<word.length(); i++) {
    if (word[i]==' '){
      ++count;
    }
    if ((count%2)!=0) { //odd counts
        cout << skipws << word[i];
    }
  }
  cout << endl;

  cout << input << endl;

  return 0;
}
