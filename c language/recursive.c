#include<stdio.h>
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a * fact (a-1);
}
int main()
{
    int n,f;
    printf("enter number:");
    scanf("%d",&n);
    f = fact(n);
    printf("the factorial number is : %d",f);
}