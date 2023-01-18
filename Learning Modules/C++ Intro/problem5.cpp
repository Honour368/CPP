#include<iostream>
using namespace std;

int main() {
  int a1, a2, a3, a4, test, exam, average;
  double a_weight = 0.2, test_weight = 0.2, exam_weight = 0.6;
  cin >> a1 >> a2 >> a3 >> a4 >> test >> exam;
  average = (a1+a2+a3+a4)/4;
  average = (average*a_weight) + (test*test_weight) + (exam*exam_weight);
  cout << "Average: " << average << endl;
  return 0;
}
