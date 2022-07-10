/* Take 10 integers from keyboard using loop and print their average value on the screen. */

#include <iostream>
using namespace std;

int main(){
    int num=0, i, n;

    for(i=0; i < 10; i++) {
        cout << "Enter number" << endl;
        cin >> n;
        num = num + n;
    }
    cout << "Sum is " << num << endl;

    return 0;
}