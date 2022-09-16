/* Reference  */

#include <iostream>
using namespace std;

void increment(int &n)
{
    n++;
}

int main()
{
    int i = 10;

    increment(i);
    cout << i << endl;

    int &j = i;

    i++;
    cout << i << endl;
    j++;
    cout << j << endl;

    int k = 100;
    j = k;
    cout << i << endl;
    cout << j << endl;

    return 0;
}