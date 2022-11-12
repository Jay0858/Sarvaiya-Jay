#include<stdio.h>
int main()
{
	char str[20],rev[20];
	printf("enter string: ");
	scanf("%[^\n]s",str);
	printf("your string is:%s",str);

	int i;
	for(i=0;str[i] !='\0';i++);
	printf("\nstring length is: %d",i);

	int k=i;
	for(int j=0;j<=i;j++)
{
	rev[j] = str[--k];
}
	rev[i]='\0';
	printf("\nreverse string is: %s",rev);
}