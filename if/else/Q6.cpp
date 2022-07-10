/* A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not. */

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