/*Print multiplication table of 24, 50 and 29 using loop.*/
using namespace std;
#include<iostream>
int main(){
	int n;
	cout<<"Enter the number";
	cin>>n;
	for(int i=1; i<11; i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<"\n";
	}
}
