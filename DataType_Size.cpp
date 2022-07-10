#include<iostream>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin >> a;
    cout<<"Size of int "<<a<<endl;
    
    float b;
    cout<<"Size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of int "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of short int "<<sizeof(si)<<endl;
    cout<<"Size of long int "<<sizeof(li)<<endl;

    return 0;
}