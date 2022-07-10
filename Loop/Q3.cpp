/* 
Print the following patterns using loop :
a.
*
**
***
****
b.
   *  
 *** 
*****
 *** 
   *  
c.
1010101
 10101 
  101  
   1    */

#include<iostream>
using namespace std;

int main(){
    int i,j,k,n=4,z=1;

    for(i=0; i<5; i++){
        for(j =0; j<=5; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
 
    for(i=0; i<5; i++){
        for(j =0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    for(i=1; i<=n; i++){
        for(j=n-1; j>=i; j--){
            cout<<(" ");
        }
        for(k=1; k<=z; k++){
            cout<<"*";
        }
        z+=2;
        cout<<endl;
    }

    cout<<endl;

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<(" ");
        }
        for(k=1; k<=i*2-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=n-1; i>=1; i--){
        for(j=1; j<=n-i; j++){
            cout<<(" ");
        }
        for(k=1; k<=i*2-1; k++){o
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}