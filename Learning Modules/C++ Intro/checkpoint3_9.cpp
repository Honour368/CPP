#include<iostream>
using namespace std;

int main() {
  double sum=0, num=0, i=0;
  while (num!=-1) {
    cin >> num;
    if (num==-1) {
      cout << sum/i;
    }
    sum+=num;
    i++;
  }
  return 0;
}
