/* Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255. */

#include <iostream>
using namespace std;

int main(){
    int a, b;
    char c;

    cout<<"Enter the Range From "<<endl;
    cin>>a;
    cout<<"Enter the Range To "<<endl;
    cin>>b;

    for(int i=a; i<=b; i++){
        c = i;
        cout<<c<<endl;
    }

    return 0;
}