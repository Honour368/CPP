#include<iostream>
#include<cmath>
using namespace std;

double mean (double a[], int arraySize) {
  double sum=0;
  for (int i=0; i<arraySize; i++) {
    sum+=a[i];
  }
  double avg = sum/arraySize;
  return avg;
}

double variance (double b[], int arraySize) {
  double x = mean(b, arraySize);
  double s = 0;
  for (int i=0; i<arraySize; i++) {
    s+=(pow((b[i]-x),2));
  }
  double result = s/arraySize;
  return result;
}

int main() {
  double array[20]={};
  int amount;
  cin >> amount;

  for (int i=0; i<amount; i++) {
    cin >> array[i];
  }

  double var = variance (array, amount);

  cout << "Variance = " << var << endl;

  return 0;
}
