/* The total number of students in a class are 45 out of which 25 are boys. If 80% of the total students secured grade 'A' out of which 17 are boys, then write a program to calculate the total number of girls getting grade 'A'. */

#include<iostream>
using namespace std;

int main(){
    int students, boys, gradePercent, gradeA, boysGradeA;
    cout<<"Enter the total Number of Students"<<endl;
    cin>>students;
    cout<<"Enter the NUmber of Boys Students"<<endl;
    cin>>boys;
    cout<<"Enter the the Percentage of Studnts got Grade A"<<endl;
    cin>>gradePercent;
    cout<<"Enter the Number of Boys having Grade 'A'"<<endl;
    cin>>boysGradeA;

    gradeA = (students*gradePercent)/100;
    cout<<"Students Having Grade A are "<<gradeA<<endl;
    cout<<"Total number of girls getting grade 'A' = "<<gradeA-boysGradeA<<endl;

    return 0;
}