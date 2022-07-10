#include<stdio.h>
void main()
{
    int arr[100], i,n;
    printf("enter the size of array \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
         scanf("%d", &arr[i]);
    }
    printf("Printing elements of the array \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}