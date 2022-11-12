#include<stdio.h>
#define n 5
int a[n];
int top = -1;
int insertmid(int val)
{
    if (top>=n-1)
        printf("\nArray is Full...");
    else
    {
    for(int i=n;i>=n/2;i--)
    { 
        a[i]=a[i-1];
    }
    a[n/2]=val;
    ++top;
    }
}
int delete()
{
    if (top < 0)
        printf("\nArray is Empty...");
    else
        {
            for(int i=0;i>=n/2;i--)
            {
                a[i]=a[i-1];
            }
        }
}
int display()
{
    for (int i=0;i<=top;i++)
        printf(" %d",a[i]);
        printf("\n");
}
int main()
{
    insertmid(10);
    insertmid(20);
    insertmid(30);
    insertmid(40);
    insertmid(50);

    //delete();
    // delete();
    // delete();
    // delete();
    display();
}


