/*Take 10 integers from keyboard using loop and print their average value on the screen.*/
 using namespace std;
 #include <iostream>
 int main(){
 int sum;
 int a[10];
 for(int i=0; i<10; i++){
  cin>>a[i];
  sum=sum+a[i]; 
  }
 cout<<"average = "<<sum/10;
 return 0; 
}

