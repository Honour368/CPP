#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// int main() {
  // string greeting = "Hi", name = "ENGG1340";
  // cout << greeting << " " << name << '\r' << endl;
  // cin >> greeting;
  // cout << greeting << " " << name << '\a' << endl;
  // const double pi = 3.142;
  // int radius, height;
  // cin >> radius >> height;
  // double volume = (pi * radius * height);
  // std::cout << volume << endl;
  // //std::cout << 2/0 << '\n';
  // char c='b';
  // c=c-'a'+'A';
  // cout << c << endl;
  // c=c+2;
  // cout << c << endl;
  //
  // int d=0, i=1;
  // d=i++;
  // cout << i << " " << d << endl;
  //
  // char g='#';
  // cout << g << endl;
  // int x=2, y, a=1;
  // y=(a*pow(x, 3))-12;
  // cout << y << endl;
  // x = 3 % 3 + 3 * 2 - 2 / 2;
  // cout << (35)%6 << endl;
  // return 0;
  //}

const int NUM = 10;
const double X = 20.5;
int main()
{
    	int a, b;
    	double p;
    	char grade;
    	a = 23;
    	cout << "a = " << a << endl;
    	cout << "Enter two integers: ";
    	cin >> a >> b;
    	cout << endl;
    	cout << "The numbers you entered are "
              << a << " and " << b << endl;
    	p = X + 2 * a - b;
    	cout << "p = " << p << endl;
    	grade = 'B';
    	cout << "Your grade is " << grade << endl;
    	a = 2 * NUM + p;
    	cout << "The value of a = " << a << endl;
    	return 0;
}
