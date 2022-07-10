/* Enter two numbers from keyboard. Write a program to check if the two numbers are equal.
 */

#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the First number"<<endl;
    cin>>a;
    cout<<"Enter the Second number"<<endl;
    cin>>b;
    if(a==b){
        cout<<"Both are qual"<<endl;
    }
    else{cout<<"Both are not equal"<<endl;}
    return 0;
}