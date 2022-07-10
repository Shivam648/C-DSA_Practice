#include <iostream>
using namespace std;

int main()
{
    int x = 4, y;
    y = ++x;
    cout << "PreIncrement:Value of x = " << x << endl;
    cout << "PreIncrement:Value of y = " << y << endl;

    y = x--;
    cout << "PostDecrement:Value of x = " << x << endl;
    cout << "PostDecrement:Value of y = " << y << endl;
}