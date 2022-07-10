/* Take input of some length in meter and covert it to feet and inches. */

#include <iostream>
using namespace std;

int main(){
    int num, feet , inches;

    cout<<"Enter te Number"<<endl;
    cin>>num;
    cout<<num<<" meter"<<endl;

    feet = double(num * 3.28084);
    cout<<feet<<" feet";

    return 0;
}
