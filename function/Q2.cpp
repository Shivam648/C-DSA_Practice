/* Define a function that returns the product of two numbers entered by user. */

#include <iostream>
using namespace std;

int product(int a, int b){
    int c = a*b;
    return c;
}

int main(){
    int num1 , num2;
    cout<<"Enter the First Number"<<endl;
    cin>> num1;
    cout<<"Enter the Second NUmber"<<endl;
    cin>> num2;
    cout<<"Sum is "<< product(num1, num2);
    return 0;
}