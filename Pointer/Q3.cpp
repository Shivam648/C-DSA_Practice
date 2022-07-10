/* Write a program to print the value of the address of the pointer to a variable whose value is input from user. */

#include<iostream>
using namespace std;

int main()
{
    int x, *y;
    cout << "Enter a number\n";
    cin >> x;
    y = &x;
    cout << "Value of the address of pointer of "<< x << " is "<< &y<<"\n";
    return 0;
}	