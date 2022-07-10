#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 4, c = 6, d = 8;
    if (!(a == 0))
        cout << "a is not zero" << endl;
    else
        cout << "a is zero" << endl;
    if ((a < b) && (c > d))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    if ((a > b) || (c > d))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}