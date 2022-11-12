//make bill using structure by passsing array
#include<stdio.h>
#include<string.h>
struct bill
{
    int rate,qty,amt,bill_amt,net_bill,dis,gst;
    char product[50];
};
int main()
{
    struct bill b[5];
    int i;
    
    for(i=0;i<2;i++)
    {
        printf("enter product name:");
        scanf("%s",&b[i].product);
        printf("enter rate:");
        scanf("%d",&b[i].rate);
        printf("enter qty:");
        scanf("%d",&b[i].qty);
    }
    printf("-------------------------------------------------------------------------\n");
    printf("                     I KHODAL GENERAL STORE\n");
    printf("-------------------------------------------------------------------------\n");
    printf("PRODUCT\tRATE\tQTY\tAMT\tDIS\tBILL_AMT\tGST\tNET_BILL");
    printf("\n-------------------------------------------------------------------------");
    for(i=0;i<2;i++)
    {
        b[i].amt = b[i].rate * b[i].qty;
        b[i].dis = (b[i].amt * 5) / 100;
        b[i].bill_amt = b[i].amt - b[i].dis;
        b[i].gst = (b[i].bill_amt * 18) / 100;
        b[i].net_bill = b[i].bill_amt + b[i].gst;
        printf("\n%s\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d",b[i].product,b[i].rate,b[i].qty,b[i].amt,b[i].dis,b[i].bill_amt,b[i].gst,b[i].net_bill);
    } 
    printf("\n-------------------------------------------------------------------------\n");
    printf("                     THANK YOU VISIT AGAIN...........");
    printf("\n-------------------------------------------------------------------------");   
}

