using namespace std;
#include <iostream>
int main()
{
   int n1,n2;
   cin >> n1 >> n2;
    while(n1 != n2)
    {
       if(n1 > n2)
           n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;
    return 0;
}

