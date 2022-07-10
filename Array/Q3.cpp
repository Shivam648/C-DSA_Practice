/* Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0. */

#include <iostream>
using namespace std;
   
int main(){
    int input[100], count, i, num, positive, negative, odd, even, zero;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }

    cout<<"NUmbers are :"<<endl;
    for(int i=0; i<count; i++){
    cout<< input[i]<<", ";
    }
    cout<<endl;
 
    return 0;
}