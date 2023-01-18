
#include <iostream>
using namespace std;
int main()
{
    int *p1, *p2;
    p1 = new int;
    *p1 = 42;
    p2 = p1;  //Here, p2 is initialized to point to the same thing p1 is pointing to.

    cout << "*p1 = " << *p1 << ", ";
    cout << "*p2 = " << *p2 << endl;

    *p2 = 53;
    cout << "*p1 = " << *p1 << ", ";
    cout << "*p2 = " << *p2 << endl;

    p2 = new int(20);    //here, p1 is changed to point to something else (88), while p2 is still pointing to the original thing p1 pointed to.
    *p1 = 88;
    cout << "*p1 = " << *p1 << ", ";
    cout << "*p2 = " << *p2 << endl;

    delete p1;
    delete p2;

    return 0;
}
