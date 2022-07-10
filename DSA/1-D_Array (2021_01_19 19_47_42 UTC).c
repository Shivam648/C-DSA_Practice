#include<stdio.h>
int main()
{
    int arr[5], i;
    printf("enter the elements \n");
    for(i = 0; i < 5; i++)
    {
         scanf("%d", &arr[i]);
    }
    printf("Printing elements of the array \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}