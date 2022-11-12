#include <stdio.h>
#define n 5
int a[n];
int top = -1;
int insertfirst(int val)
{
    if (top >= n - 1)
        printf("array is full... ");
    else
    {
        for (int i = n; i <= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        ++top;
    }
}

int deletefirst()
{
    if (top < 0)
        printf("array is empty... ");
    else
        --top;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}

int display()
{
    if (top < 0)
        printf("array is empty...");
    else
    {
        for (int i = 0; i <= top; i++)
            printf(" %d", a[i]);
    }
    printf("\n");
}
int main()
{
    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
    // deletefirst();
    // deletefirst();
    // deletefirst();
    // deletefirst();
    // deletefirst();
    display();

    return 0;
}