/* If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), write a program to calculate his total marks and percentage marks. */

#include<iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3, total, percentage;

    cout<<"Enter the score of Sub1"<<endl;
    cin>>sub1;
    cout<<"Enter the score of Sub2"<<endl;
    cin>>sub2;
    cout<<"Enter the score of Sub3"<<endl;
    cin>>sub3;

    total = sub1+ sub2 + sub3;
    percentage = (total*100)/300;
    cout<<"Total marks Obtain out of 300 is " << total <<endl;
    cout<<"Percentage marks is " << percentage <<endl;
    return 0;
}