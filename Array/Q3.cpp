/* Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0. */

#include <iostream>
using namespace std;

int main()
{
    int input[100], count, i, num, pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    cout << "Enter Number of Elements in Array" << endl;
    cin >> count;

    cout << "Enter " << count << " numbers" << endl;

    // Read array elements
    for (i = 0; i < count; i++)
    {
        cin >> input[i];
    }

    cout << "NUmbers are :" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << input[i] << ", ";
    }
    cout << endl;

    for (int i = 0; i < count; i++)
    {
        if (input[i] > 0)
            pos++;
        else if (input[i] < 0)
            neg++;
        else
            zero++;
        if (input[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Positive " << pos << endl;
    cout << "Negative " << neg << endl;
    cout << "Zero " << zero << endl;
    cout << "Odd " << odd << endl;
    cout << "Even " << even << endl;

    return 0;
}
