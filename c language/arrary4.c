#include<stdio.h>
void main()
{
	int i,j,a[5][5],b[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			printf("enter b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]\tb[%d][%d]: "a[i][j],b[i][j]);
		}	
		printf("\n");
	}
}