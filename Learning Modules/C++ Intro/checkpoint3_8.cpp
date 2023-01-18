#include<iostream>
using namespace std;

int main() {
  double sum=0, num, i=0;
  while (num!=-1) {
    sum+=num;
    i++;
  }
  if (num==-1)
    cout << sum/i;
  return 0;
}
