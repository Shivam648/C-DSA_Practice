/*Take 10 integers from keyboard using loop and print their average value on the screen.*/
using namespace std;
#include<iostream>
int main(){
	int sum=0;
	for(int i<=10; i++){
		int x;
		cout<<"enter the number"<<"/n";
		cin>>x;
		sum=sum+x;
	}
	cout<<"average = "<<sum/10;
	return 0;	
}
