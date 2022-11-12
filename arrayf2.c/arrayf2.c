#include<stdio.h>
#define n 5
int smallest(int a[])
{
    int i,smallest=a[0];
    for(i=0;i<n;i++)
    {
    if(smallest>a[i])
            smallest = a[i];
    }
    return smallest;
}
int largest(int a[])
{
    int i,largest=a[0];
    for(i=0;i<n;i++)
    {
    if(largest<a[i])
            largest = a[i];
    }
    return largest;
}
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter your element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    int x = smallest(a);
        printf("\nsmallest number is :%d",x);
    int y = largest(a);
        printf("\nlargest number is :%d",y);
}