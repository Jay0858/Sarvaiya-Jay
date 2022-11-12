//no argument with return

#include<stdio.h>
int dosum()
{
    int a,b,sum;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    //sum=a+b;
    return a+b;
}
int main()
{
    //printf("hello\n");
    int a=dosum();
    printf("sum is %d\n",a);
    //printf("\n thanks visit again.....");
}