#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double f = 0.11;

    cout << f << endl;       // default floating-point notation
    cout << fixed << f << endl; // fixed decimal notation
    cout << scientific << f << endl;    // scientific notation

   	cout.unsetf(ios_base::floatfield);
    cout << f << endl;      // switch back to default floating-point notation


    return 0;
}
