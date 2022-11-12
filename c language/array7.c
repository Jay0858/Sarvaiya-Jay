#include<stdio.h>
void main()
{
	int i,j,a[5][5],upper,lower,x=0,y=0,z=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
		if(i==j)
			x=x+a[i][j];
		else if(i<j) 	
			y=y+a[i][j];
		else if(i>j) 	
			z=z+a[i][j];
		}
	}
	printf("\n");
	printf("diagonal=%d\n",x);
	printf("upper=%d\n",y);
	printf("lowwer=%d",z);

	
}