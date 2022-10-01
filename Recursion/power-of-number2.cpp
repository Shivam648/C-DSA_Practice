/* Problem Statement:
Ninja is sitting in an examination hall. He is encountered with a problem statement, "Find 'X' to the power 'N' (i.e. 'X' A 'N'). Where 'X' and 'N' are two integers."
Ninja was not prepared for this question at all, as this question was unexpected in the exam.
He is asking for your help to solve this problem. Help Ninja to find the answer to the problem.

Sample Input 1 :
2
5 2
9 3
Sample Output 1 :
25
729

Explanation For Sample Input 1 :

Test Case 1 :
Given X = 5 and N = 2. So, 5 ^ 2 = 25. As 5 * 5 = 25.
Test Case 2 : Given X = 9 and N = 3. So, 9 ^ 3 = 729. As 9 * 9 * 9 = 729.

Sample Input 2 :
2
5 0
1 10
Sample Output 2 :
1
1 */

#include <iostream>
using namespace std;

long long pow(int x, int n)
{
    if (n == 0)
        return 1;
    long long temp = pow(x, n / 2);
    if (n % 2 == 1)
        return temp * temp * x;
    return temp * temp;
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