/* Initialize and print all elements of a 2D array. */

#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num;
    cout << &num << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << "Size of num is = " << sizeof(num) << endl;
    cout << "Size of ptr is = " << sizeof(ptr) << endl;
}
