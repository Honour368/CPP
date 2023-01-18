#include<iostream>
using namespace std;

int main() {
  int i,j;
  for(i=1; i<=13; i++) {
    for(j=1; j<=20; j++) {
      if((j==4 || j==5 || j==10 || j==11) && (i!=1 && i!=13 && i!=7))
        cout << "H";
      else if(i==7 && (j>=4 && j<=11))
        cout << "H";
      else if ((j==16 || j==17) && (i!=1 && i!=13))
        cout << "I";
      else if (j==1 || j==20 || i==1 || i==13)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
