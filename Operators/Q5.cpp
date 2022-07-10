/* 
Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

Now solve the above question to check if atleast one of the conditions 'a < 50' and 'a < b' is true. 
*/

#include<iostream>
using namespace std;

int main(){
    int a, b;
    
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    // condition = a<50 && a<b ? "True":"False";
    if(a<50){
        cout<<"True"<<endl;
    }
    else if(a<b){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}