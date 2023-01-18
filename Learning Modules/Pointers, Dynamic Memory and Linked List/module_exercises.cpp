#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//Exercise 1
// int * Largest_element_pointer(int a[], int size) { //returning a pointer, so, function header must be consistent
//   /*static*/ int * largest = &a[0];
//   for (int i=0; i<size; i++) {
//     if (a[i]> *largest) {
//       largest = &a[i];
//     }
//   }
//   return largest;
// }
//
// int main() {
//   const int size = 10;
//   int a[size];
//   srand(time(NULL));
//   for (int i=0; i<size; i++) {
//     a[i] = rand() %10 + 1;
//     cout << &a[i] << ' ';
//     cout << a[i] << endl;
//   }
//   cout << endl;
//   int * largest_element_address = Largest_element_pointer(a, size); //pointer variable to accept the return value which is also a pointer.
//   cout << largest_element_address << endl;
//   return 0;
// }

// Exercise 2
// void addOne(int &p) { //adds one to the integer referenced by p (pass-by reference)
//   p++;
// }
// void addTwo(int *p) { //adds one to the integer pointed to by pointer p
//   (*p)++;    //keep the dereferenced format to refer to the integer pointed to by the pointer and not the pointer.
// }
//
// int main() {
//   int x = 2;
//   int * xPtr = &x;
//
//   addTwo(xPtr);
//   cout << *xPtr << endl;
//
//   addOne(x);
//   cout << x << endl;
//
//   return 0;
// }

//playing around with cin.get()
// int main() {
//   string name = cin.get();
//   cout << name << endl;
//   return 0;
// }

//Problem 1
// int main() {
//   int i1, i2;
//   int * p1 = &i1, * p2 = &i2;
//   *p1 = 10;
//   *p2 = 20;
//   cout << *p1 << " " << *p2 << endl;
//   *p1 = *p2;
//   cout << *p1 << " " << *p2 << endl;
//   *p1 = 30;
//   cout << *p1 << " " << *p2 << endl;
//   return 0;
// }

//Problem 3
// int main() {
//   int num;
//   cin >> num;
//   int * array = new int [num];
//   for (int i=0; i<num; i++) {
//     cin >> array[i];
//   }
//   for (int i=num-1; i>=0; i--) {
//     cout << array[i] << " ";
//   }
//   delete [] array;
//   cout << endl;
//   return 0;
// }

//Problem 4
// string * addEntry (string * array, int &size, string newEntry) {
//   string * newArray = new string [size+1];
//   for (int i=0; i<size; i++) {
//     newArray[i] = array[i];
//   }
//   newArray[size] = newEntry;
//   size++;
//   delete [] array;
//   return newArray;
// }
//
// string * deleteEntry (string * array, int &size, string entryToDelete) {
//   int index = -1;
//   for (int i=0; i<size; i++) {
//     if (array[i] == entryToDelete) {
//       index = i;
//       break;
//     }
//   }
//   if (index == -1) {
//     return array;
//   }
//   string * newArray = new string [size-1];
//   for (int i=0; i<size-1; i++) {
//     if (i >= index) {
//       newArray[i] = array[i+1];
//     }
//     else{
//       newArray[i] = array[i];
//     }
//   }
//   size--;
//   delete [] array;
//   return newArray;
// }
//
// int main() {
//   int num;
//   cin >> num;
//   string * array = new string [num];
//   for (int i=0; i<num; i++) {
//     cin >> array[i];
//   }
//   for (int i=0; i<num; i++) {
//     cout << array[i] << " ";
//   }
//   cout << endl;
//
//   // string str;
//   // cin >> str;
//   // string * newArray = addEntry(array, num, str);
//   // for (int i=0; i<num; i++) {
//   //   cout << newArray[i] << " ";
//   // }
//   // cout << endl;
//
//   string str;
//   cin >> str;
//   string * newArray = deleteEntry(array, num, str);
//   for (int i=0; i<num; i++) {
//     cout << newArray[i] << " ";
//   }
//   cout << endl;
//
//   delete [] newArray;
//   cout << endl;
//   return 0;
// }
