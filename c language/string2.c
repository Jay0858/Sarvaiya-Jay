//skill + qode = skillqode

#include<stdio.h>
int main()
{
	char str[50],a[50],b[50];
	printf("enter A: ");
	//scanf("%[^\n]s",a);
	gets(a);
	printf("enter B: ");
	//scanf("%[^\n]s",b);
	gets(b);
	int i,j;
	for(i=0;a[i] !='\0';i++);
	//printf("\nstring length of a is: %d",i);

	for( j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("\nyour string is: %s",a);	
}