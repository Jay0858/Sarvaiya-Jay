//file management in c
#include<stdio.h>
int main()
{
    FILE *fp;
    //fp = fopen("c:/user/SQW014/desktop/lib/skill.text","+w");
    fp = fopen("skill.txt","w+");
    fprintf(fp,"welcome to skill qode,decode youur skill here......,\n");
    fputs("and c++ language now......\n",fp);
    fclose(fp); 
}
/*

r = open a text file to read mode
w = open a text file to write mode
a = open a text file to append mode 

*/
