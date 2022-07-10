/* Write a program to print the address of the pointer to a variable whose value is input from user. */

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    int * b = &a;
    cout<<"Address of the pointer to a variable is "<<&*b<<endl;

    return 0;
}