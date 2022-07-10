using namespace std;
#include<iostream>
int main(){
	int n;
	cout<<"Enter the number";
	cin>>n;
	for(int i=1; i<10000001; i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<"\n";
	}
}
