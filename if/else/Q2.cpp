/* A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user. */

#include <iostream>
using namespace std;

int main(){
    int price, quantity;

    cout << "Enter quantity" << endl;
	cin >> quantity;
	price = quantity*100;
	if (price>1000){
        cout<<"Actual Cost is "<< price <<endl;
		cout << "Total cost after 10% discount is " << price-(price*.1) << endl;
	}
	else{
        cout<<"Discount Availabe only for the Purchase of more than 1000 Rs"<<endl;
		cout << "Total cost is " << price << endl;
	}

    return 0;
}