/* Take 10 integer inputs from user and store them in an array.Now, copy all the elements in another array but in reverse order. */

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int a[n], b(n);
    cout << "Enter the NUmber" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        b[i] = a[n - i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "\n";
    }

    return 0;
}