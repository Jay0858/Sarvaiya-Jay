//running total
#include<stdio.h>
int total(int a[])
{
    int i;
    printf("\nrunning total:\n");
    for(i=0;i<5;i++)
    {
        if(i==0)
            printf("%d",a[i]);
        else
        {
            int total = a[i] + a[i-1];
            printf("\n%d\t%d",a[i],total);
        }
    }
}
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter element[%d]:",i);
        scanf("%d",&a[i]);
    }
    total(a);
}