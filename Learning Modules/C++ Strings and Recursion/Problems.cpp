#include<iostream>

using namespace std;

int main() {
  string s = "Honour";
  int count = 0;
  char i;
  for (i:s){
    cout << i << " ";
    count++;
  }
  cout << endl << count << endl;
  return 0;
}
