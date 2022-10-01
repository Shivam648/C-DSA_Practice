/* Implement pow(x, n), which calculates x raised to the power n(i.e., xn).

                     Example 1 :

    Input : x = 2.00000,
            n = 10 Output : 1024.00000 Example 2 :

    Input : x = 2.10000,
            n = 3 Output : 9.26100 Example 3 :

    Input : x = 2.00000,
            n = -2 Output : 0.25000 Explanation : 2 - 2 = 1 / 22 = 1 / 4 = 0.25
 */

#include <iostream>
using namespace std;

/* long long pow(int x, int n)
{
    if (n == 0)
        return 1;
    int partialAns = pow(x, n - 1);
    return x * partialAns;
} */

double pow(double x, long int n)
{
    int sign = 0;
    if (n < 0)
    {
        sign = 1;
        n = n * -1;
    }
    double ans = 1.0;
    while (n)
    {
        if (n % 2)
        {
            ans = ans * x;
            n = n - 1;
        }
        else
        {
            x = x * x;
            n = n / 2;
        }
    }
    if (sign)
    {
        ans = (double)1 / ans;
    }
    return ans;
}

int main()
{
    double x;
    long int n;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << pow(x, n);
    return 0;
}