/* Define two functions to print the maximum and the minimum number respectively among three numbers entered by user. */

#include <iostream>
using namespace std;

int max_min(int a, int b, int c){
  if (a>b){
        if (a>c) {
            cout<< a << endl;
        }
        else {
            cout<< c << endl;
        }
    }
    else {
        if (b>c){
            cout<< b << endl;
        }
        else {
            cout<< c << endl;
        }
    }

    return 0;
}

int main(){
    int num1, num2, num3;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the Second number"<<endl;
    cin>>num1;
    cout<<"Enter the Third number"<<endl;
    cin>>num1;
    cout<<"Max Number is "<< max_min(num1, num2, num3);

    return 0;
}