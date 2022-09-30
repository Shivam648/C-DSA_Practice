#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    int partialAns1 = fib(n - 1);
    int partialAns2 = fib(n - 2);
    return partialAns1 + partialAns2;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}