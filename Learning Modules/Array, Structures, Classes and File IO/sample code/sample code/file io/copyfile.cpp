#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<sstream>

using namespace std;

//To copy an existing file to another file
int main() {
  string filename;
  cout << "Type in filename: ";
  cin >> filename;

  ifstream fin (filename); //to open file called "filename" and pass it to fin object
  if (fin.fail()) {
    cout << "Error! Can't open desired file." << endl;
    exit(1);
  }

  ofstream fout; //output each line to data5.txt
  fout.open("data5.txt", ios::app); //appends each line rather than overwriting the whole file
  if (fout.fail()) {
    cout << "Error! Can't open desired file." << endl;
    exit(1);
  }

  string input;

  while (getline(fin, input)){
    fout << input << endl;
  }

  fin.close();
  fout.close();

  return 0;
}

// sxzhao@cs.hku.hk
