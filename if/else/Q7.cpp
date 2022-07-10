/* Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly. */

#include<iostream>
using namespace std;

int main(){
    float classHeld, classAttended, PercentClasaAtended;

    classHeld = 50;
    cout<<"Enter the No of Class Attended"<<endl;
    cin>>classAttended;
    PercentClasaAtended = (classAttended/classHeld)*100;

    cout<<"Your Class Attendance is "<<PercentClasaAtended<<" %"<<endl;

    if(PercentClasaAtended<75){
        cout<<"You are not allowed to sit for the Exam"<<endl;
    }
    else{
        cout<<"You are Allowed to sit for Exam"<<endl;
    }

    return 0;
}