#include<iostream>
using namespace std;

int main() {
  int x, y, sum, product, remainder, quotient;
  cin >> x >> y;
  sum = x+y;
  remainder = x%y;
  quotient = x/y;
  product = x*y;
  cout << sum << " " << product << endl;
  cout << remainder << " " << quotient << endl;
  return 0;
}
