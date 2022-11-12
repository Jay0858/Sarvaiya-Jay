//with argument no return 

#include<stdio.h>
void calc(int a,int b)
{
    printf("total:%d",a+b);
}
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    calc(a,b);     //pass argument
    calc(30,40);   //pass argument
}