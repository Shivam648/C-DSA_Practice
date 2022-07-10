/* Write a program to print the circumference and area of a circle of radius entered by user by defining your own function. */

#include <iostream>
using namespace std;

float circumference(int radius){
    float c = (2*3.14*radius);
    return c;
}
float area(int radius){
    float a = (3.14*radius*radius);
    return a;
}
    
int main(){
    int radius;

    cout<<"Enter radius of the Circle"<<endl;
    cin>>radius;
    cout<<"Circumferenc is " << circumference(radius)<<endl;
    cout<<"Area is " << area(radius)<<endl;
}