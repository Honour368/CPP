/*
   This program prints out the perfect numbers between 1 and N
*/

#include <iostream>
using namespace std;

const int N = 1000;

bool isPerfect(int a) {
  int sum=0;
  for (int i=1; i<a; i++) {
    if ((a%i)==0)
      sum+=i;
  }
  if (sum == a)
    return true;
  else
    return false;
}

int main()
{
	cout << "For the integers from 1 to " << N << ":\n";

	for (int j = 2; j <= N; ++j)
		if (isPerfect(j))
			cout << j << " is perfect\n";

	cout << endl;

	return 0;
}
