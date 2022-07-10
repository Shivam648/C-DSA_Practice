/* Print the following pattern on the screen
****
 ** 
  * 
 ** 
**** */

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"****"<<endl<<setw(1);
    cout<<"***"<<setw(3)<<endl;
    cout<<"**"<<setw(2)<<endl;
    cout<<"***"<<setw(3)<<endl;
    cout<<"****"<<setw(1)<<endl;
    return 0;
}