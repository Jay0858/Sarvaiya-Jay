// Find Perfect Number
#include <stdio.h>
int perfect(int n)
{
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        
        sum = sum + i;
    }
        return sum;
    
}
int main()
{
    int n,a;
    printf("enter number :");
    scanf("%d",&n);
    a=perfect(n);
    if(n==a)
        printf("PERFECT",n);
    else
        printf("NOT PERFECT",n);
}    
   