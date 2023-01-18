#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int large (int a[], int arraySize) {
  int max=a[0];
  for (int i=1; i<arraySize; i++) {
    if (a[i]>max) {
      max = a[i];
    }
  }
  return max;
}

int small (int a[], int arraySize) {
  int min=a[0];
  for (int i=1; i<arraySize; i++) {
    if (a[i]<min) {
      min = a[i];
    }
  }
  return min;
}

int main() {
  string filename;
  const int arraySize = 10;
  int number, largest, smallest, num[arraySize]={};

  cout << "Pls enter the name of file: ";
  cin >> filename;

  ifstream fin(filename.c_str()); //initialized fin as well as opened file called filename
  if (fin.fail()){
    cout << "Error, file can't be opened" << endl;
    exit(1);
  }
  int i=0;
  while (fin >> number){
    num[i] = number;
    i++;
  }

  fin.close();

  largest = large (num, arraySize);
  smallest = small (num, arraySize);

  ofstream fout;
  fout.open(filename.c_str(), ios::app);
  if (fout.fail()){
    cout << "Error, file can't be opened" << endl;
    exit(1);
  }

  fout << "Largest number is: " << largest << endl;
  fout << "Smallest number is: " << smallest << endl;

  fout.close();

  return 0;
}
