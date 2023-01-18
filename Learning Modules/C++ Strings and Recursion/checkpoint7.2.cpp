#include<iostream>
#include<string>

using namespace std;

int main() {
  string mainLine, a, b;
  getline(cin, mainLine);
  cin >> a >> b;
  int pos = mainLine.find(a, 0);
  while (pos!=-1) {
    mainLine.replace(pos, a.length(), b);
    pos = mainLine.find(a, pos+1);
  }
  cout << mainLine << endl;
}
