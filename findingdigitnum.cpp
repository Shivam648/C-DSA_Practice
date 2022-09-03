/* Finding number of digits in Numbers */

#include <iostream>
using namespace std;

int countDigit(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
