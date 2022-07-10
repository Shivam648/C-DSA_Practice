/* Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not. */

#include <iostream>
using namespace std;
   
int main(){
    int input[5], i, num;
      
    // Input array elements
    for(i = 0; i < 5; i++){
        cout<<"Enter the NUmber"<<endl;
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array\n";
    cin >> num;
      
    // search num in input Array from index 0 to elementCount-1 
    for(i = 0; i < 5; i++){
        if(input[i] == num){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == 5){
        cout  << "Element Not Present in Input Array\n";
    }
 
    return 0;
}