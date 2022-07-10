/* A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount. */

#include<iostream>
using namespace std;

int main(){
    long int salary, bonus, year;

    cout<<"Enter the Year of Sevice"<<endl;
    cin>>year;
    cout<<"Enter Salary"<<endl;
    cin>>salary;

    if(year>5){
        cout<<"Your Bonus Salary is "<<salary+(salary)*5/100<<endl;
    }
    else{
        cout<<"Sorry your service year is less than 5, Yor Salary is "<<salary<<endl;
    }

    return 0;
}