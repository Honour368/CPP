#include<iostream>

using namespace std;

// Challenge 1
bool isPrime(int a) {
  for (int i = 2; i<((a/2)+1); i++){
    if (a%i==0){
      return 0;
    }
  }
  return 1;
}

int primeFactorization(int num, int a[], int arraySize) {  //to return all the prime factors
  int primeFactors[]={};
  int j=0;
  for (int i=0; i<arraySize; i++) { //run through prime number array
    while (n%a[i]==0){
      primeFactors[j]=a[i];
      j++;
    }
  }
  return primeFactors;
}

int main() {
  //initialize array members to 1 (true)
  const int arraySize;
  cout << "Please enter your number: ";
  cin >> arraySize;
  bool array[arraySize] = {};
  for (int i = 0; i<arraySize; i++){
    array[i] = 1;
  }

  //sieve method to carry out isPrime operation and then change all multiples of array members to false (0)
  for (int j = 2; j<arraySize; j++){
    if (array[j]==0){
      continue;
    }
    else {
      array[j] = isPrime(array[j]);
      for (int i=2; i<((arraySize/j)+1); i++) {
        array[j*i]=0;
      }
    }
  }

  //copy out prime numbers between 2 and arraySize to a new array
  int x=0;
  int primeNumbers[999] = {};
  for (int i=0; i<arraySize; i++) {
    if (array[i]==1) {
      primeNumbers[i]=array[i];
      x++;
    }
  }
  const int primeNumbersCount = x;

  int primeFactorlist[] = primeFactors(arraySize, primeNumbers, primeNumbersCount);

  cout << endl;
  return 0;
}
