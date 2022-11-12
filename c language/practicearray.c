#include<stdio.h>
int main()
#define n 5
{
    int a[5],c;
    int i=0;

    printf("input array :\n");
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }
    printf("array after swapping :\n");
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }
    c=a[0];
    a[0]=a[n-1];
    a[n-1]=c;
    printf(" \n");
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }
}





