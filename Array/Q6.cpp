/* Write a program to find the sum and product of all elements of an array. */

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int num[n], sum = 0, product = 1;
    cout << "Enter the Number" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "NUmbers are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << ", ";
    }
    cout << endl;

    cout << "sum are " << endl;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
        product = product * num[i];
    }
    cout << "sum are " << sum << endl;
    cout << "Product are " << product << endl;

    return 0;
}