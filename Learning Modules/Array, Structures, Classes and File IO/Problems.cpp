#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;

//problem 1
// int main() {
//   char letter[15] = {};
//   for (int i=0; i<15; i++){
//     cin >> noskipws >> letter[i]; //no skip white space
//   }
//   for (int i=14; i>=0; i--){
//     cout << noskipws << letter[i];
//     //cout << (int)letter[i] << endl;
//   }
//   cout << endl;
//   return 0;
// }

//problem 2
// bool isPrime(int a) {
//   for (int i = 2; i<((a/2)+1); i++){
//     if (a%i==0){
//       return 0;
//     }
//   }
//   return 1;
// }
//
// int main() {
//   //initialize array members to 1 (true)
//   bool array[1000] = {};
//   for (int i = 0; i<999; i++){
//     array[i] = 1;
//   }
//
//   //to carry out isPrime operation and then change all multiples of array members to false (0)
//   for (int j = 2; j<999; j++){
//     if (array[j]==0){
//       continue;
//     }
//     else {
//       array[j] = isPrime(array[j]);
//       for (int i=2; i<((999/j)+1); i++) {
//         array[j*i]=0;
//       }
//   }
// }
//   //print out indexes that are prime numbers between 2 and 999 (their members haven't changed to 0)
//   for (int i=2; i<999; i++) {
//     if (array[i]==1) {
//       cout << i << " ";
//     }
//   }
//   cout << endl;
//   return 0;
// }

//Problem 3
// void swapFrontBack (int a[], int arraySize){
//   if (a.empty()) {
//     cout << "Array is empty" << endl;
//   }
//   else{
//     int temp;
//     temp = a[0];
//     a[0] = a[arraySize-1];
//     a[arraySize-1] = temp;
//   }
// }
//
// int main() {
//   const int arraySize = 10;
//   int array[arraySize] = {};
//   for (int i=0; i<arraySize; i++) {
//     cin >> array[i];
//   }
//   swapFrontBack(array, arraySize);
//   for (int i=0; i<arraySize; i++) {
//     cout << array[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

//Problem 4
// string numToWord (int a){
//   string word;
//   string wordNums[20][8] = {{"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"},
//   {"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, {"nine"}, {"ten"},
//   {"eleven"}, {"twelve"}, {"thirteen"}, {"fourteen"}, {"fifteen"}, {"sixteen"}, {"seventeen"}, {"eighteen"}, {"nineteen"}};
//
//   if (a<20 && a!=0) {
//     word = wordNums[a][0];
//   }
//   else{
//     int tens = a/10;
//     word  = wordNums[0][tens-2];
//     int units = a%10;
//     if (units != 0){
//       word += "-";
//       word += wordNums[units][0];
//     }
//   }
//   return word;
// }
//
// int main() {
//   string word;
//   for (int i=1; i<100; i++) {
//     word = numToWord(i);
//     cout << i << setw(20) << word << endl;
//   }
//   return 0;
// }

//Problem 5
// void copyArray(int source[], int destination[], int arraySize1, int arraySize2) {
//   for (int i=0; i<arraySize1; i++) {
//     destination[i] = source[i];
//   }
// }

//Problem 6
// bool isPalindrome(char a[], int arraySize) {
// bool isPalindrome(string a) {
//   int arraySize = a.length();
//   if (arraySize%2 == 0) { //even numbers
//     for (int i=0; i<=(((arraySize-1)/2)); i++) {
//       if (a[i]!=a[(arraySize-1)-i]) {
//         return 0;
//       }
//     }
//   }
//   else {
//     for (int i=0; i<(((arraySize/2))); i++) {
//       if (a[i]!=a[(arraySize-1)-i]) {
//         return 0;
//       }
//     }
//   }
//   return 1;
// }
//
// int main() {
//   // const int arraySize = 4;
//   // string word[arraySize] = {'n', 'o', 'o', 'n'};
//   string word = {};
//   int arraySize = word.length();
//   cin >> word;
//   // if (isPalindrome(word, arraySize)) {
//   if (isPalindrome(word)) {
//     // for (int i=0; i<arraySize; i++) {
//     //   cout << word[i];
//     // }
//     cout << word << " is a Palindrome." << endl;
//   }
//   else {
//     // for (int i=0; i<arraySize; i++) {
//     //   cout << word[i];
//     // }
//     cout << word << " is not a Palindrome." << endl;
//   }
//   return 0;
// }

//Problem 10 & 11
// struct Entry {
//   string firstName;
//   string lastName;
//   char dorm;
//   int age;
//
//   bool operator==(const Entry& others) const {  //to define operator == to be used with structure vaiables
//     return firstName==others.firstName && lastName==others.lastName && dorm==others.dorm
//     && age==others.age;
//   }
//
//   int operator+(const Entry& others) const {  //to define operator + to be used with structure vaiables
//     return age+others.age;
//   }
// };
//
// bool equal (Entry a, Entry b) {
//   if (a.firstName==b.firstName && a.lastName == b.lastName && a.dorm == b.dorm && a.age == b.age) {
//     return 1;
//   }
//   else {
//     return 0;
//   }
//   return 0;
// }
//
// int main() {
//   Entry e1 = {"Harry", "Potter", 'D', 25};
//   Entry e2 = {"James", "Bond", 'D', 40};
//   Entry e3 = e2;
//
//
//   if (equal(e3, e2)) {
//     cout << "Same" << endl;
//   }
//   else {
//     cout << "Different" << endl;
//   }
//   cout << e1+e2 << endl;
//   return 0;
// }

//Problem 12
// struct Entry {
//   string firstName;
//   string lastName;
//   char dorm;
//   int age;
// };
//
// void sort(Entry array[], int arraySize) { //making use of selection sort here in ascending order
//   for (int i=0; i<arraySize; i++) {
//     int minAge = array[i].age, indexNo = i;
//     for (int j=(i+1); j<arraySize; j++) {
//       if (array[j].age < minAge) {
//         minAge = array[j].age;
//         indexNo=j;
//       }
//     }
//     Entry temp;  // to swap array entries
//     temp = array[i];
//     array[i] = array[indexNo];
//     array[indexNo] = temp;
//   }
// }
//
// int main() {
//   const int arraySize = 100;
//   Entry entries[arraySize];
//   fstream fin("Problem12.txt");
//   if (fin.fail()) {
//     cout << "Error in opening file" << endl;
//     exit(1);
//   }
//
//   int i=0;  //Determines no of lines read in so as to determine how much array size we would use.
//   while (fin >> entries[i].firstName){
//     fin >> entries[i].lastName >> entries[i].dorm >>entries[i].age;
//     i++;
//   }
//   int finalArraySize = i;
//
//   fin.close();
//
//   sort(entries, finalArraySize);
//
//   for (int i=0; i<finalArraySize; i++) {
//     cout << entries[i].firstName  << " " << entries[i].lastName << " " << entries[i].dorm  << " " << entries[i].age << endl;
//   }
//
//   return 0;
// }
