using namespace std;
#include<iostream>
	struct Fraction
	{
		int n;
		int d;
	};
int main()
{
	cout << "Please enter the numerator for the first fraction";
	cin >> n;
	cout << "Please enter the denominator for the first fraction";
	cin >> d;
	while(d == 0)
	{
		cout<<"Please enter a denominator other than 0."<<endl;
		cin >> denominator;
	}
	return 0;
}
