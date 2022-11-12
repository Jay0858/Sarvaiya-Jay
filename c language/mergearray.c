
#include <stdio.h>
int main()
{
    int aOne[100], aTwo[100], aMerge[100];
    int sOne, sTwo, i, j;
        printf("input the Size for First Array: ");
        scanf("%d", &sOne);
        printf("input first array's Elements : ");
    for (i = 0; i < sOne; i++)
        {
            scanf("%d", &aOne[i]);
            aMerge[i] = aOne[i];
        }
    j = i;
        printf("\ninput the Size for Second Array: ");
        scanf("%d", &sTwo);
        printf("input second array's Elements : ");
    for (i = 0; i < sTwo; i++)
        {
            scanf("%d", &aTwo[i]);
            aMerge[j] = aTwo[i];
            j++;
        }
        printf("\nThe merged array is):\n");
    for (i = 0; i < j; i++)
        printf(" %d", aMerge[i]);
    printf("\n");
    return 0;
}