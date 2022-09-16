#include<stdio.h>

int main()
{
    int a[]={},a2,i,j;

    printf("No of a = ");
    scanf("%d",&a2);

    for (i = 0; i <= a2; i++)
    {
        printf("enter the num : ");
        scanf("%d",&a[i]);
    }
    for ( j = 0; j <= a2; j++)   
    {
        printf("%d\t",a[j]);
    }
    
    //printf("%d",a);
    
}