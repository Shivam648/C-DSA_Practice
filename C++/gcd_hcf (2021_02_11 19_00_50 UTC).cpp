using namespace std;
#include<iostream>
int main()
{
    int x,y,gcd,lcm,t,b,a;
    cout<<"Enter two integers\n";
    cin>>x;
    cin>>y;
    a = x;
    b = y;
    while(b!=0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    gcd = a;
    lcm = (x*y)/gcd;
    cout << "GCD is "<<gcd<<" and LCM is "<<lcm<<"\n";
    return 0;
}
