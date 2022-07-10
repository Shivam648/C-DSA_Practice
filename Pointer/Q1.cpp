/* Write a program to print the address of a variable whose value is input from user. */

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the NUmber"<<endl;
    cin>>a;
  
    cout<<"The address of a is "<<&a<<endl;
    return 0;
}