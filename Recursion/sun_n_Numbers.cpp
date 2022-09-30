/* #include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;
    int partialAns = sum(n - 1);
    return n + partialAns;
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
} */

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}