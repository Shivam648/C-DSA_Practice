/* Print multiplication table of 24, 50 and 29 using loop. */

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the Number"<<endl;
    cin>>num;

    for (int i = 1; i <=10; i++)
    {
        cout<<num<<" * "<<i<< " = "<< num * i<<endl;
    }

    return 0;
}