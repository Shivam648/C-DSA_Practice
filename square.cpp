// Write a program to find the square of the number 3.9.

#include <iostream>
using namespace std;

int main(){
    double n, sqr;
    cout<< "Enter the Number"<<endl;
    cin>>n;

    sqr = double(n*n);
    cout<< "Square of " << n << " is " << sqr;
 
    return 0;
}
