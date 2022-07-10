#include<iostream>
using namespace std;
int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
   
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int savings;
    cin>>savings;

    if (savings > 5000 ) {
        if (savings > 10000) {
            cout <<"Roadtrip with Neha \n";
        } else {
            cout <<"Shoping with Neha \n";
        }
    } else if (savings > 1000) {
        cout << "Rashmi \n";
    }
    else {
        cout << "friend";
    }
    return 0;
}