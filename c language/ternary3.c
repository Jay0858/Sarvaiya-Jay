#include<stdio.h>
int main()
{
    int a=100,b=300,c=400;
    printf("largest no is.: %d",(a>b ? a:b) > c ? (a>b ? a:b) :c );

}