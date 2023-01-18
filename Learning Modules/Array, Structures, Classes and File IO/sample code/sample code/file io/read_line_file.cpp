#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("data3.txt");
    if (fin.fail())
    {
        cout << "Error in file opening!" << endl;
        exit(1);
    }

    string line = "Hi, I'm single";

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    cout << line.length() << endl; //this line won't work because "line" here is out of scope of getline function.

    fin.close();

    return 0;
}
