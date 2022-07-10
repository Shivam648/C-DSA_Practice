// Take two integer inputs from user. First calculate the sum of two then product of two. Finally, print the sum and product of both obtained results.

#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, sum;
    cout<< "Enter the value of a"<<endl;
    cin>>a;
    cout<< "Enter the value of b"<<endl;
    cin>>b;
    c= a+b;
    cout<<"Sum = "<<c<<endl;
    d= a*b;
    cout<<"Producr = "<<d<<endl;
    sum = c+d;
    cout<<sum<<endl;

    return 0;
}