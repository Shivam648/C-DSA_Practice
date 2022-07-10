/* Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result. */

#include <iostream>
using namespace std;

int main(){
    long int num1, num2;
    num2 = (((num1 + 8)/3)%5)*5;
    cout<<num2;
    return 0;
}