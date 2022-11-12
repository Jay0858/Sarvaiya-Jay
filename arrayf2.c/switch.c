#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);

    printf("1. addition \n2. substraction \n3. multiplication \n4. division\n");
    printf("enter yuour choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("addition of a and b is:%d",a+b);
            break;
        case 2:
            printf("substraction of a and b is:%d",a-b);
            break;
        case 3:
            printf("multiplication of a and b is:%d",a*b);
            break;
        case 4:
            printf("division of a and b is:%d",a / b);
            break;
        default:
            printf("\n wrong choice......");
            break;
    }
}