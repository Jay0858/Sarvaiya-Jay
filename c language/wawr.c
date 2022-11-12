//with argument with return

#include<stdio.h>
int calc (int a,int b)
{
    return a+b;
}
int main()
{
    int x=calc(120,50);
    printf("total sum is %d",x);
}