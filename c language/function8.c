// make result using global variable 
#include<stdio.h>
int a,b,c,total;
float per;
void result()
{
    printf("maths\tsci\teng\ttotal\tper");
    printf("\n%d\t%d\t%d\t%d\t%.2f",a,b,c,total,per);
}
void calc()
{
    total=a+b+c;
    per=total/3;
    result();
}
void setdata()
{
    printf("enter maths:");
    scanf("%d",&a);
    printf("enter sci:");
    scanf("%d",&b);
    printf("enter eng:");
    scanf("%d",&c);
    calc();
}
int main()
{
    setdata();
}



