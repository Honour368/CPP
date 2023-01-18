#include<iostream>
#include<cmath>
using namespace std;

double mean (double a, double b, double c, double d, double e) {
  double avg = (a+b+c+d+e)/5;
  return avg;
}

double stDev (double a, double b, double c, double d, double e) {
  double x = mean(a, b, c, d, e);
  double s = sqrt((pow((a-x),2) + pow((b-x),2) + pow((c-x),2) + pow((d-x),2) + pow((e-x),2))/5);
  return s;
}

int main() {
  double a,b,c,d,e; //the variables here are different from those in the functions above
  cin >> a >> b >> c >> d >> e;
  double meanValue = mean(a, b, c, d, e);
  double stDevValue = stDev(a, b, c, d, e);
  cout << "Mean = " << meanValue << endl;
  cout << "Standard deviation = " << stDevValue << endl;
  return 0;
}
