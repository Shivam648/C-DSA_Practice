/* Take two int values from user and print greatest among them. */

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the First Number"<<endl;
    cin>>num1;

    cout<<"Enter the Second Number"<<endl;
    cin>>num2;

    if(num1>num2){
        cout<<num1<<" is greater"<<endl;
    }
    else{
        cout<<num2<<" is greater"<<endl;
    }

    return 0;
}