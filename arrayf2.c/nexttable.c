//next table
#include<stdio.h>
int main()
{
    int i=1,n,j=1;
    printf("enter n");
    scanf("%d",&n);

    table:
        if(i<=10)
        {
            printf("\n%d * %d = %d",n,i,n*i);
            i++;
            goto table;
        } 
        printf("\n");   
n++;
    
    nexttable:
        if(j<=10)
        {
            
            printf("\n%d * %d = %d",n,j,n*j);
            j++;
            goto nexttable;
        }    
}