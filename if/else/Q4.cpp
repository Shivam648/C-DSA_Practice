/* A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade. */

#include<iostream>
using namespace std;

int maun(){
    int marks;

    cout<<"Enter your Marks"<<endl;
    cin>>marks;

    if(marks>80){
        cout<<"Grade A"<<endl;
    }
    else if(marks > 60 && marks < 80){
        cout<<"Grade B"<<endl;
    }
    else if(marks > 50 && marks < 60){
        cout<<"Grade B"<<endl;
    }
    else if(marks > 45 && marks < 50){
        cout<<"Grade B"<<endl;
    }
    else if(marks > 25 && marks < 45){
        cout<<"Grade B"<<endl;
    }
    else if(marks < 25){
        cout<<"Grade F"<<endl;
    }
    else{
        cout<<"Enter the marks between 1 to 100 Only"<<endl;
    }
return 0;
}