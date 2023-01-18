#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string line = " apple orange banana ", word;

    istringstream line_in(line);

    while (line_in >> word)
    {
        cout << "\"" << word << "\"" << endl; //why does it start new line at end of each word?
    }

    return 0;
}
