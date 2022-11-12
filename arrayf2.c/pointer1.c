#include<stdio.h>
void main()
{
    int a=10,*p;
    p=&a;
    printf("value of a is: %d",a);    
    printf("\naddress of a is: %u",&a);
    printf("\naddress of a using p is: %d",p);
    printf("\naddress of p is:%d",&p);
    printf("\n adress of a using p is:%d",*p);
}