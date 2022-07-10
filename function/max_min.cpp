#include<bits/stdc++.h>
using namespace std;

void max_min(int a[],int n){
sort(a,a+3);
cout<<"max:"<<a[0]<<endl;
cout<<"min:"<<a[2];
}

int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    max_min(a,3);
    return 0;
}
