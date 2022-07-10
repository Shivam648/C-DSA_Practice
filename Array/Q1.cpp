/* Take 10 integer inputs from user and store them in an array and print them on screen. */

#include <iostream>
using namespace std;

int main(){
    int num[10];
    for(int i=0; i<10; i++){
        cout<<"Enter the NUmber"<<endl;
        cin>>num[i];
    }
    cout<<"NUmbers are "<<endl;
    for(int i=0; i<10; i++){
        cout<< num[i]<<endl;
    }

    return 0;
}
