#include<iostream>
#include<cmath>

using namespace std;

int main() {
  double a[20] = {}; //initializing with closed braces initilizes all element to 0;
  for (int i=0; i<5; i++) { //0 to 4
    a[i] = sqrt(i);
  }
  for (int i=10; i<20; i++) { //10 to 19
    a[i] = pow(i, 3);
  }

  for (int j=0; j<20; j++) {
    if (j%2==0){
      cout << a[j] << " ";
    }
  }
  cout << endl;
  return 0;
}
