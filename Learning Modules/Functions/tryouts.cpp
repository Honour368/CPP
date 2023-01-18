#include <iostream>
#include <cmath>
using namespace std;

// void figureMeOut(int &x, int y, int &z) {
// 	cout << x << ' ' << y << ' ' << z << endl;
// 	x = 1;
// 	y = 2;
// 	z = 3;
// 	cout << x << ' ' << y << ' ' << z << endl;
// }
//
// int main() {
// 	int a=10, b=20, c=30;
// 	figureMeOut(a, b, c);
// 	cout << a << ' ' << b << ' ' << c << endl;
// }

//Problem 1
// int main(){
//   int a = 0;
//   if (a==0)
//     cout << "a is 0\n";
//   else
//     cout << "a is not 0";
//   return 0;
// }

//Problem 2
// int main(){
//   int b = 2;
//   if (b == 2)
//     b++;
//   if (b == 2);
//     b++;
//   cout << b << endl;
//   return 0;
// }

//Problem 3
// c=3
// d=3, c=4
// cout first cout
// c=5, d=3
// no second cout
// c=6, d=3
// int main() {
//   int c = 3, d = c++;
//   if (c++ == 4 && d == 3)
//     cout <<"1: " << c << " " << d << endl;
//   if (++c == 5 && d-- == 3 ) //shortcircuit
//     cout << "2: " << c-- << " " << d << endl;
//   cout << "3: " << c << " " << d << endl;
//   return 0;
// }

//Problem 4&5
// int main() {
//   int a, b, c, min;
//   cin >> a >> b >> c;
//   min = (a<b)? a:b;
//   min = (c<min)? c:min;
//   cout << "Minimum = "<< min << endl;
//   return 0;
// }

//Problem 6
// int main() {
//   int VarScore;
//   cin >> VarScore;
//   if (VarScore > 100)
//     cout << "High" << endl;
//   else
//     cout << "Low" << endl;
//   return 0;
// }

//Problem 7
// int main () {
//   char a, b;
//   cin >> a >> b;
//   if (a == 'P' || a == 'p') {
//     if (b == 'R'|| b == 'r')
//       cout << "Winner is Player 1 because Paper covers Rock" << endl;
//     if (b == 'S'|| b == 's')
//       cout << "Winner is Player 2 because Scissors cuts Paper" << endl;
//     else
//       cout << "Nobody wins" << endl;
//   }
//   else if (a == 'R'|| a == 'r') {
//     if (b == 'P'|| b == 'p')
//       cout << "Winner is Player 2 because Paper covers Rock" << endl;
//     if (b == 'S'|| b == 's')
//       cout << "Winner is Player 1 because Rock breaks Scissors" << endl;
//     else
//       cout << "Nobody wins" << endl;
//   }
//   else { //last option is Scissors
//     if (b == 'P'|| b == 'p')
//       cout << "Winner is Player 1 because Scissors cuts Paper" << endl;
//     if (b == 'R'|| b == 'r')
//       cout << "Winner is Player 2 because Rock breaks Scissors" << endl;
//     else
//       cout << "Nobody wins" << endl;
//   }
//   return 0;
// }

//Problem 8
// int main () {
//   int count=3;
//   for (int i=1; i<=count; ++i){
//     for (int j=1; j<=count; ++j)
//       cout << i << " x " << j << " = " << i*j << '\n';
//   }
//   cout << '\v' << endl;
//   cout << '\t' << endl;
//   cout << '\v' << endl;
//
//   int count1=3;
//   for (int k=1; k<=count1; k++){
//     for (int b=1; b<=count1; b++)
//       cout << k << " x " << b << " = " << k*b << '\n';
//   }
//   cout << '\a';
//   return 0;
// }
// //Question: why is there no difference in the way ++i and i++ works here?
// //Also, how does the vertical tab work?

//Problem 9
// int main() {
//   int a, SumPos=0, SumNeg=0;
//   for (int i=1; i<=5; i++) {
//     cin >> a;
//     if (a>0)
//       SumPos+=a;
//     else
//       SumNeg+=a;
//   }
//   cout << "Sum of Positive integers is " << SumPos << endl;
//   cout << "Sum of Negative integers is " << SumNeg << endl;
//   cout << "Total Sum is " << SumNeg + SumPos << endl;
//   return 0;
// }

//Problem 10
// int main() {
//   int i, j, a;
//   for (i=6; i>=0; i--) {
//     a = i;
//     for (j=0; j<=a; j++) {
//       cout << j;
//     }
//   cout << endl;
//   }
//   return 0;
// }

//Problem 11
// char signs (double i) {
//   // char ans;
//   if (i > 0)
//     return 'P';
//     // ans = 'P';
//   else
//     return 'N';
//   //   ans = 'N';
//   // return ans;
// }
// int main () {
//   double a;
//   char b;
//   cin >> a;
//   b=signs(a);
//   cout << b << endl;
//   return 0;
// }

//Problem 12
// double avg(int a, double b) {
//   return (a+b)/2;
// }
//
// int main() {
//   int i;
//   double j;
//   cin >> i >> j;
//   cout << avg(i,j) << endl;
//   return 0;
// }

//Problem 13
// bool isPerfect(int a) {
//   int sum=0;
//   for (int i=1; i<a; i++) {
//     if ((a%i)==0)
//       sum+=i;
//   }
//   if (sum == a)
//     return true;
//   else
//     return false;
// }
//
// int main() {
//   int b, ans;
//   cin >> b;
//   ans = isPerfect(b);
//   if (ans==1)
//     cout << "True" << endl;
//   else
//     cout << "False" << endl;
//   return 0;
// }

//Probem 14
// bool isPerfect(int a) {
//   int sum=0;
//   for (int i=1; i<a; i++) {
//     if ((a%i)==0)
//       sum+=i;
//   }
//   if (sum == a)
//     return true;
//   else
//     return false;
// }
//
// int main() {
//   int Llim, Ulim, ans;
//   cin >> Llim >> Ulim;
//   while (Llim <= Ulim) {
//     ans = isPerfect (Llim);
//     if (ans == 1)
//       cout << Llim << endl;
//     Llim++;
//   }
//   return 0;
// }

//tryout
// int main() {
//   int i=1;
//     while ((i<10) && (i>0)){
//      cout << i << endl;
//      i+=2;
//      }
//   return 0;
// }

//Problem 15
// double convert (double Li, double miles){
//    double const LiToGal = 0.264179;
//    double Gal;
//    Gal = Li*LiToGal;
//    return (miles/Gal);
// }
//
// int main() {
//   double Li1, miles1, Li2, miles2, a, b;
//   cout << "Please input the number \'-1\' when you wish to stop" << endl;
//   cin >> Li1 >> miles1 >> Li2 >> miles2;
//   if (Li1==-1)
//     return 0;
//   while (Li1!=-1) {
//     a = convert(Li1, miles1);
//     b = convert(Li2, miles2);
//     cout << a << " miles per gallon" << endl;
//     cout << b << " miles per gallon" << endl;
//     if (a>b)
//       cout << "Car 1 has higher efficiency" << endl;
//     else if (a<b)
//       cout << "Car 2 has higher efficiency" << endl;
//     else
//       cout << "They both have the same efficiency" << endl;
//     cin >> Li1 >> miles1 >> Li2 >> miles2;
//   }
//   return 0;
// }

// void CalcArea (int a, int b, int c) {
//   double s, area;
//   s=(a+b+c)/2;
//   area = sqrt(s*((s-a)*(s-b)*((s-c))));
//   cout << area << endl;
// }
//
// int main() {
//   int len1, len2, len3;
//   cin >> len1 >> len2 >> len3;
//   CalcArea(len1, len2, len3);
//   return 0;
// }

//Problem 17
// int main()
// {
//   int a = -15, b;
//   a--;
//   cout << "a = " << a << endl;
//   {
//     int b = 7;
//     b = 2*a*b;
//   }
//   int result = a+b;
//   cout << "result = " << result << endl;
// }
//result is a random value

//Challenge 1
// int main() {
//   int cycleCount = 0;
//   for (int i=1; ++i < 10; )
//     cycleCount++;
//   cout << cycleCount << endl;
//   return 0;
// }

//Challenge 2
// double avg(int a, double b) {
//   return (a+b)/2;
// }
//
// int main() {
//   int i;
//   double j;
//   cin >> i >> j;
//   cout << avg(i,j) << endl;
//   return 0;
// }

//Challenge 3
// int main() {
//   int num;
//   cin >> num;
//   int k=0;
//   for (int i=1; i<=num; i++){
//     for (int j=1; j<=num; j++){
//       if ((j<=((num+1)/2)+k) && (j>=((num+1)/2)-k))
//         cout << "*";
//       else
//         cout << " ";
//     }
//     // cout << k << endl;
//     if (i>(num/2))
//       k--;
//     else
//       k++;
//     cout << endl;
//   }
//   return 0;
// }

//Challenge 4
// int main() {
//   int num;
//   bool isPrime=1;
//   cin >> num;
//   for (int i=2; i<=(num/2); i++){
//     if ((num%i) == 0) {
//       isPrime = 0;
//       break;
//     }
//   }
//   if (isPrime==1)
//     cout << num << " is a prime number" << endl;
//   else
//     cout << num << " is not a prime number" << endl;
//   return 0;
// }

//Challenge 5
// int main() {
//   int LowLim, UppLim;
//   cin >> LowLim >> UppLim;
//   for (int j=1; (j<=UppLim && j>=LowLim); j++) {
//   bool isPrime=1;
//   for (int i=2; i<=(j/2); i++){
//     if ((j%i) == 0) {
//       isPrime = 0;
//       break;
//     }
//   }
//   if (isPrime==1)
//     cout << j << " is a prime number" << endl;
//     }
//   return 0;
// }

//Challenge 6
// bool isPerfect(int a) {
//   int sum=0;
//   for (int i=1; i<a; i++) {
//     if ((a%i)==0)
//       sum+=i;
//   }
//   if (sum == a)
//     return true;
//   else
//     return false;
// }
//
// int main() {
//   int LowLim, UppLim;
//   cin >> LowLim >> UppLim;
//   for (int j=1; (j<=UppLim && j>=LowLim); j++) {
//   bool isPrime=1;
//   for (int i=2; i<=(j/2); i++){
//     if ((j%i) == 0) {
//       isPrime = 0;
//       break;
//     }
//   }
//   if (isPrime==1 && isPerfect(j)==1)
//     cout << j << " is a prime number as well as a perfect number" << endl;
//   }
//   return 0;
// }

//Checkpoint 5.1
// void a() {
//   int a=8;
// }
// void b() {
//   int b=9;
// }
// void c() {
//   int c=10;
// }
//
// int main() {
//   b();
//   return 0;
// }

// Checkpoint 5.3
void g(int&);

int main() {
  int y = 9;
  int x = 7;
  int i=0;

  while (i<3) {
    if (i%2==0){
      g(x);
      i++;
    }
    else {
      g(y);
      i++;
    }
  }
  return 0;
}

void g(int& k) {
  int num = 6;
  if (k%2==0){
    num+=2;
    k = k+6;
  }
  else {
    num-=2;
    k = k - 6;
  }
  cout << num << ", " << k << endl;
}
