#include<stdio.h>
int doresult()
{
	int maths,eng,hindi,total;
	float per;

	printf("maths :");
	scanf("%d",&maths);
	printf("eng :");
	scanf("%d",&eng);
	printf("hindi :");
	scanf("%d",&hindi);

	total = maths + eng + hindi;
	printf("total :%d",total);

	per = total/3;
	printf("\nper :%f",per);
}  
int main()
{
	doresult();
}