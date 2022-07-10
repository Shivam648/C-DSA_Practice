/* Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1 */

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the NUmber"<<endl;
    cin>>num;

    if(num<0){
        cout<<"Your Number is "<<num*(-1)<<endl;
    }
    else{
        cout<<"Your Number is "<<num<<endl;
    }
    return 0;
}