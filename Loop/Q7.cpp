/* Take integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ). Print average and product of all numbers. */

#include<iostream>
int main(){
    using namespace std;

    int sum = 0; //to calculate the sum of number
    int count = 0; //to calculate total number of inputs

    char choice = 'y';
    while (choice!='q')
    {
        int num; // to store the entered number
        cout << "Enter a number" << endl;
        cin>>num;
        sum=sum+num;
        count++;
        cout << "Enter q to quit" << endl;
        cin >> choice;
    }
    cout << "average is " << (sum)/(count*1.0) << endl; //division of integer by integer gives integer
    //To get decimal output one of the operand must be in decimal form

    cout << "product is " << endl;
    
    return 0;
}