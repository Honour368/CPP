#include<iostream>

using namespace std;

int sum_R(int n) { //sum of first n integers using recursion
  if (n==1) {
    return 1;
  }
  else {
    return n + sum_R(n-1);
  }
}

int sum_loop(int n) {
  int sum=0;
  for (int i=1; i<=n; i++){
    sum+=i;
  }
  return sum;
}

int main() {
  int x;
  cout << "Enter a positive integer: ";
  cin >> x;
  cout << "Sum of first " << x << " integers using recursion: " << sum_R(x) <<endl;
  cout << "Sum of first " << x << " integers using iteration: " << sum_loop(x) <<endl;
  return 0;
}
