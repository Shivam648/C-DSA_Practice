/* Problem Statement
Given an alphabetical string 'S'. Determine whether it is palindrome or not. A palindrome is a string that is equal to itself upon reversing it.

For Example:

's'= racecar
The reverse of 'S' is: racecar
Since 'S' is equal to its reverse. So 's' is a palindrome. Hence output will be 1.

Sample Input 1 :
2
racecar
niinja

Sample Output 1 :
1
0

Explanation For Sample Input 1 :
For First Case - Same as explained in above example.

For the second case -
‘S’ = niinja
Reverse of ‘S’ is : ajniin
Since ‘S’ is not equal to its reverse.So ‘S’ is not a palindrome.
ence output will be 0.

Sample Input 2 :
2
level
panama

Sample Output 2 :
1
0 */

#include <iostream>
using namespace std;

bool isPalindromeHelper(int l, int r, string &s)
{
    // Write your code here.
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPalindromeHelper(l + 1, r - 1, s);
}
bool isPalindrome(string &s)
{
    return isPalindromeHelper(0, s.size() - 1, s);
}

int main()
{
    string s;
    cout << "Enter the Number or String to check Palindrome or not" << endl;
    cin >> s;
    if (isPalindrome(s) == 1)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome";
    }
}