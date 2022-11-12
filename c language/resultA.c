#include<stdio.h>
void main()
{
	int i[5],j[5],k[5],a,b,c,total,percentage,grade;
	for(a=0,b=0,c=0;a<5,b<5,c<5;a++,b++,c++)
	{
		printf("eng[%d]:",i);
		scanf("%d",&eng[a]);
		printf("hin[%d]:",i);
		scanf("%d",&hin[b]);
		printf("guj[%d]:",i);
		scanf("%d",&guj[c]);
	}
	printf("eng\thin\tguj\ttotal\tpercentage\tgrade");

	for(a=0,b=0,c=0;a<5,b<5,c<5;a++,b++,c++)
	{
		total[i]=eng[i]+hin[i]+guj[i];
		printf("\t%d",total);

		percentage[i]=total/3;
		printf("\t%d",percentage);
		
		printf("eng[%d]:",i);
		scanf("%d",&eng[a]);
		printf("hin[%d]:",i);
		scanf("%d",&hin[b]);
		printf("guj[%d]:",i);
		scanf("%d",&guj[c]);
			

	if(percentage[i]<=80)
	{
		printf("\tgrade A");
	}
	else if(percentage>=60 && percentage<80)
	{
		printf("\tgrade B");
	}
	else if(percentage>=45 && percentage<60)
	{
		printf("\tgrade C");
	}
	else if(percentage<35)
	{
		printf("\tFAIL");
	}
		
	
	}
	
}
