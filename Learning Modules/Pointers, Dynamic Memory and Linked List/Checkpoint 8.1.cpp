#include <iostream>

using namespace std;

struct number {
  int num;
  int frequency = 0;
};

void grow_array(number * &array, int &size)
{
  number * newArray = new number [size+1];
  for (int i=0; i<size; i++) {
    newArray[i].num = array[i].num;
  }
  size++;
  delete [] array;
  array = newArray;
}

void add_element(number * &array, int size, int value)
{
  array[size-1].num = value;
}

int main()
{
  int size;
  cin >> size;
  int * set = new int [size];
  for (int i=0; i<size; i++) {
    cin >> set[i];
  }
  int count = 0, current = -1;
  number * singleSet = new number [count];
  for (int i=0; i<=size; i++) {  // to filter out a single number such that it is non-repeating
    if (set[i]>current) {
      grow_array(singleSet, count);
      add_element(singleSet, count, set[i]);
      current = set[i];
    }
  }

  for (int i=0; i<count; i++) {
    for (int j=0; j<size; j++) {
      if (singleSet[i].num == set[j]) {
        singleSet[i].frequency++;
      }
    }
  }

  // for (int i=0; i<count-1; i++) {
  //   cout << singleSet[i].num << " " << singleSet[i].frequency;
  //   cout << endl;
  // }

  int maxNumber = 0, maxFrequency = 0;
  for (int i=0; i<count; i++) {
    if (singleSet[i].frequency>maxFrequency){
      maxFrequency = singleSet[i].frequency;
      maxNumber = singleSet[i].num;
    }
  }

  cout << "The mode of the set is " << maxNumber << endl;

  delete [] set;
  delete [] singleSet;

  return 0;
}
