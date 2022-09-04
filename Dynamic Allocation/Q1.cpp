/* Reference  */

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int &j = i;

    i++;
    cout << i << endl;
    j++;
    cout << j << endl;

    return 0;
}