/* Write a program to print a number which is entered from keyboard using pointer.
 */

#include<iostream> 
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number "<<endl;
    cin>>a;

    cout<<"Number entered using pointer "<<*(&a)<<endl;
    return 0;
}

