/* Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables. E.g.-
If entered value of x is 5 and y is 10 then
cout <<x << " and " << y
should print 10 and 5. */

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    
    cout<<"Enter the 1st Number"<<endl;
    cin>>num1;
    cout<<"Enter the 2nd Number"<<endl;
    cin>>num2;

    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << "After swapping." << endl;
    cout << "Num1 = " << num1 << ", Num2 = " << num2 << endl;

    return 0;
}