#include <iostream>
using namespace std;

int main(){
    int a=4;
    int  * b= &a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value at address b "<<*b<<endl;

    int ** c = &b;
    cout<<**c<<endl;
    return 0;
}