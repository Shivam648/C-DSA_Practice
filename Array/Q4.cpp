/* Take 10 integer inputs from user and store them in an array.And, print them on screen. */

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int num[n];
    cout << "Enter the NUmber" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Numbers are " << endl;
    for (int i = 0; i < n; i++)

    {
        cout << num[i] << " ";
    }
    cout << "\nReverse Numbers are " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }

    return 0;
}