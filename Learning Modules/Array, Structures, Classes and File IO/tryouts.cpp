#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

// int main() {
//   // use initializer list to initialize array n
//     int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
//     cout << "Element" << setw(13) << "Value" << endl;
//
//     // output each array element's value
//     for ( int j = 0; j < 10; ++j )
//         cout << setw(7) << j << setw(13) << n[j] << endl;
//
//     return 0;
// }

// int main() {
//   // use initializer list to initialize array n
//     int n[10];
//     for ( int j = 0; j < 10; ++j )
//       cin >> n[j];
//     for ( int j = 0; j < 10; ++j )
//       cout << setw(7) << j << setw(13) << n[j] << endl;
//     return 0;
// }

// int main()
// {    // constant variable can be used to specify array size
//     const int arraySize = 25;
//
//     int s[arraySize];   // array s has 10 elements
//
//     for (int i = 0; i < arraySize; ++i)     // set the values
//         s[i] = 2 + 2*i;
//
//     cout << "Element" << setw(13) << "Value" << endl;
//
//     // output contents of array s in tabular format
//     for ( int j = 0; j < arraySize; ++j )
//         cout << setw(7) << j << setw(13) << s[j] << endl;
//
//     return 0;
// }

// int main()
// {
//     const int arraySize = 7;            // ignore element zero
//     int frequency[arraySize] = {};      // initialize elements to 0
//
//     srand( time(0) );   // seed random number generator
//
//     // roll die 6,000,000 times; use die value as frequency index
//     for (int roll = 1; roll <= 6000000; ++roll)
//         ++frequency[ 1 + rand() % 6 ];
//
//     cout << "Face" << setw(13) << "Frequency" << endl;
//
//     // output each array element's value
//     for ( int face = 1; face < arraySize; ++face )
//         cout << setw(4) << face << setw(13) << frequency[face];                     << endl;
//
//     return 0;
// }

//Exercise 1
// int main () {
//   int integers[10]={}, j=1, sum=0;
//   for (int i=0; i<10; i++) {
//     integers[i] = j;
//     sum+=j;
//     cout << integers[i] << " ";
//     j++;
//   }
//   cout << sum << endl;
//   return 0;
// }

// Exercise 2
// int main () {
//   int integers[10]={}, j=0, product=1;
//   for (int i=1; i<=20; i++) {
//     if ((i%2) !=0) {
//     integers[j] = i;
//     product*=i;
//     cout << integers[j] << " ";
//     j++;
//   }
//   }
//   cout << product << endl;
//   return 0;
// }

//Exercise 3
// int main() {
//   char word[10] = {};
//   for (int i=0; i<10; i++){
//     word[i]= 'a'+ i;
//   }
//   for (int i=9; i>=0; i--){
//     cout << word[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

//Exercise 4
// int main() {
//   int number[10] = {}, sum=0;
//   for (int i=0; i<10; i++){
//     cin >> number[i];
//     sum+=number[i];
//   }
//   for (int i=9; i>=0; i--){
//     cout << number[i] << " ";
//   }
//   cout << endl << sum << endl;
//   return 0;
// }

//Exercise 5
// int main() {
//   const int arraySize = 7;
//   int dice[arraySize] = {};
//   int a;
//   while (a!=0) {
//     cin >> a;
//     ++dice[a];
//   }
//   for (int i=1; i<7; i++) {
//     cout << i << setw(5) << dice[i] << endl;
//   }
//   return 0;
// }

// linear search of key value in array[]
// return the index of first occurrence of key in array[]
// return -1 if key is not found in array[]
// int linearSearch( const int array[], int sizeOfArray, int key )
// {
// 	for ( int j = 0; j < sizeOfArray; ++j )
// 		if ( array[ j ] == key ) // if found,
// 			return j; 			// return location of key
//
// 	return -1; 	// key not found
// }
//
// int main()
// {
//     const int arraySize = 10;  // size of array
//     int a[ arraySize ];         // declare array a
//     int searchKey;              // value to locate in array a
//
//     // fill in some data to array
//     for ( int i = 0; i < arraySize; ++i )
//         a[i] = 2 * i;
//
//     cout << "Enter an integer to search: ";
//     cin >> searchKey;
//
//     // try to locate searchKey in a
//     int element = linearSearch( a, arraySize, searchKey );
//
//     // display search results
//     if ( element != -1 )
//         cout << "Value found in element " << element << endl;
//     else
//         cout << "Value not found" << endl;
//
//     return 0;
// }

//linear search variant
// int linearSearch( const int array[], int sizeOfArray, int key, int &startPos ) {
// 	for ( int j = startPos; j < sizeOfArray; j++ )
// 		if ( array[ j ] == key ){ // if found,
//       startPos=j+1;
// 			return j; }	// return location of key
//
// 	return -1; 	// key not found
// }
//
// int main()
// {
//     const int arraySize = 10;  // size of array
//     int a[ arraySize ] = {1, 2, 3,10,2,4,2,3,3,1};         // declare array a
//     int searchKey, startPos=0;              // value to locate in array a
//
//     // fill in some data to array
//     // for ( int i = 0; i < arraySize; ++i )
//     //     a[i] = 10;
//
//     cout << "Enter an integer to search: ";
//     cin >> searchKey;
//
//     // try to locate searchKey in a
//     int element = linearSearch( a, arraySize, searchKey, startPos);
//
//     if (element == -1)
//       cout << "Value not found" << endl;
//       else {
//     // display search results
//         while ( element != -1 ) {
//             cout << "Value found in element " << element << endl;
//             element = linearSearch( a, arraySize, searchKey, startPos );
//           }
//         }
//
//     return 0;
// }

//Char exercises
//Exercise 1
int charToInt(char a) {
  int change = a-'0';
  return change;
}

//Exercise 2
char toUpper(char a) {
  char change;
  if (a<='z' && a>='a'){
    change = a - ('b'-'B');
  }
  else
    change = a;
  return change;
}

//Exercise 3
void toUpper2(char a[], int arraySize) {
  for (int i=0; i<arraySize; i++) {
    a[i] = toUpper(a[i]);
  }
  cout << a << " ";
}

int main() {
  char name[] = "honour olatunji", age = '9', sex = 'm';
  toUpper2(name, 15);
  char newSex = toUpper(sex);
  int newAge = charToInt(age);
  cout << newAge << " " << newSex << endl;
  cout << strlen(name) << endl;
  return 0;
}
