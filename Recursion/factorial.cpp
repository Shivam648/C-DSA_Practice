#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 1;
    int partialAns = f(n - 1);
    return n * partialAns;
}
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        cout << f(n);
    }
    return 0;
}