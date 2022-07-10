// Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.

#include <iostream>
using namespace std;

int main(){
    int l, w;
    cout <<"Entr the value of Length"<<endl;
    cin>>l;
    cout <<"Entr the value of Width"<<endl;
    cin>>w;
    cout << "Area is " << l*w << endl;
    cout << "Perimeter is " << 2*(l+w) << endl;
	return 0;
}