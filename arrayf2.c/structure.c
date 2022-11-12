//structure => group collection of different type of variable
//user define data type 
#include<stdio.h>
#include<string.h>
struct student 
{
    int roll_no;
    char name[50];
    int m,e,s,total;
    float percentage;
};
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter roll no:");
        scanf("%d",&s[i].roll_no);
        printf("enter name:");
        scanf("%s",&s[i].name);
        printf("enter m:");
        scanf("%d",&s[i].m);
        printf("enter e:");
        scanf("%d",&s[i].e);     
        printf("enter s:");
        scanf("%d",&s[i].s);
    }
    printf("roll_no\tname\tmaths\tenglish\tscince\ttotal\tpercentage");
    printf("\n------------------------------------------------------------");
    for(i=0;i<2;i++)
    {
        s[i].total = s[i].m + s[i].e + s[i].s;
        s[i].percentage = s[i].total / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",s[i].roll_no,s[i].name,s[i].m,s[i].e,s[i].s,s[i].total,s[i].percentage);
    }    
}
