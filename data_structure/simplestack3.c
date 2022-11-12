#include<stdio.h>
#define n 5
int a[n];
int top=-1;
int insert(int val)
{
    if(top>=n-1)
        printf("array is full... ");
    else
        a[++top]=val;
    for(int i=n;i>=0;i--)
    {
        a[n]=a[n-1];
    }
        a[0]=val;
}

int display()

{
    for(int i=0;i<=top;i++)
        printf(" %d",a[i]);
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    
    return 0;
}