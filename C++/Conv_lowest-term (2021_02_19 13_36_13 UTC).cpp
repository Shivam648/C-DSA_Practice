using namespace std;
#include<iostream>
int main(){
	int num1,num2,i=1;
    printf(“enter two number ”);
	scanf(“%d %d”,&num1,&num2);
	for(i=1;i<num1 && i<num2;i++)
	{
	if(num1%i==0 && num2%i==0)
    gcd=i;
}
printf(“the gcd is %d \n”,gcd);
} 
}
return 0;
