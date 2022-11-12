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
}

int delete()
{
    if(top<0)
        printf("array is empty... ");
    else
       --top;
}

int display()
{
    if(top<0)
        printf("array is empty...");
    else
    {
        for(int i=0;i<=top;i++)
            printf(" %d",a[i]);
    }
        printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    delete();
    delete();
    delete();
    delete();
    delete();
    display();
    
    return 0;
}