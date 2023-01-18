#include<iostream>
using namespace std;

// Challenge 1
// int main() {
//   int product = 2LL*(654321*123456)%1000000000;
//   cout << product << endl;
//   return 0;
// }

// Challenge 2
// int main() {
//   int a=4, b=3, c=2;
//   cout << a+=b%=c << endl;
//   return 0;
// }
// none of them works because of unresolved overloaded function type

//Challenge 3
int main() {
  int i=0, n=0;
  while (n<5) {
    i=i+(cin >> i);
    // if (n==5) {
    //   cout << i << endl;
    //   break;
    // }
    n++;
  }
  return 0;
}
