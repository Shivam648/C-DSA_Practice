/*Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
Write a C++ program to calculate factorial of a number.*/
using namespace std;
#include<iostream>
int main(){
	int j , number;
	cout<<"Enter the Number";
	cin>> number;
	int fact = 1;
	for (j=1;j<=number;j++){
		fact= fact*j;
	}
	cout<<fact;
	return 0;
}
