#include<stdio.h>
int revnum(int no)
{
    int rev = 0, rem;
        
    while (no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no/10;
    }
    return rev;
}
int main()
{
    int no,a;
    printf("Enter the number: ");
    scanf("%d", &no);  
    a=revnum(no);

printf("The reversed number is: %d", a);
}