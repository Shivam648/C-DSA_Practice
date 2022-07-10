/* Write a program to print the sum of two numbers entered by user by defining your own function. */

#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

int main(){
    int num1 , num2;
    cout<<"Enter the First Number"<<endl;
    cin>> num1;
    cout<<"Enter the Second NUmber"<<endl;
    cin>> num2;
    cout<<"Sum is "<< sum(num1, num2);
    return 0;
}
