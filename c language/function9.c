// make result using local variable
#include<stdio.h>
void result(int a,int b,int c,int total,float percentage)
{
    printf("maths\tsci\teng\ttotal\tpercentage\tgrade");
    printf("\n%d\t%d\t%d\t%d\t%.2f",a,b,c,total,percentage);
    if(percentage>=80)
	{
		printf("\t\tgrade A");
	}
	else if(percentage>=75 && percentage<80)
	{
		printf("\t\tgrade B");
	}
	else if(percentage>=60 && percentage<75)
	{
		printf("\t\tgrade C");
	}
    else if(percentage>=45 && percentage<60)
	{
		printf("\t\tgrade D");
	}
	else if(percentage<=35 || a<35 || b<35 || c<35)
	{
		printf("\t\tFAIL");
	}
}
void calc(int a,int b,int c)
{
    int total;
    float percentage;
    total = a + b + c;
    percentage = (float)total / 3;
    result(a,b,c,total,percentage);
}
void setdata()
{
    int a,b,c;
    printf("enter maths:");
    scanf("%d",&a);
    printf("enter sci:");
    scanf("%d",&b);
    printf("enter eng:");
    scanf("%d",&c);
    calc(a,b,c);
}
int main()
{
    setdata();
}