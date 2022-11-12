
                                                            /*SINGLE STACK*/

/*#include<stdio.h>
#define n 5
int a[n];
int top = -1;
int insertEnd(int val)
{
    if (top>=n-1)
        printf("\nArray is Full...");
    else
        a[++top]=val;
}
int display()
{
    for (int i=0;i<=top;i++)
        printf(" %d",a[i]);
        printf("\n");
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    display();
}*/

                                                     /*MULTI STACK*/


/*#include <stdio.h>
#define n 5
int a[n];
int top = -1;
int insert(int val)
{
    if (top >= n - 1)
        printf("array is full... ");
    else
        a[++top] = val;
}

int delete ()
{
    if (top < 0)
        printf("array is empty... ");
    else
        --top;
}

int display()
{
    for (int i = 0; i <= top; i++)
        printf(" %d", a[i]);
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    delete ();
    delete ();
    delete ();
    delete ();
    // delete();
    display();
}*/


                                        /* INSERTFIRT DELETFIRST*/


/*#include<stdio.h>
#define n 10
int a[n];
int top = -1;
int insertFirst(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else

    {
        for (int i = n; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        ++top;
        
    }
}
int deletfirst()
{
    if (top < 0)
        printf("\nArray is Empty...");
    else
        --top;
        for(int i = 0;i<n;i++)
        {
            a[i] = a[i+1];
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
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);
    insertFirst(60);
    deletfirst();
    display();
}*/



                                            /* MIDDLE IN*/



/*#include<stdio.h>
#define n 5
int a[n];
int top = -1;
int insertEnd(int val)
{
    if (top>=n-1)
        printf("\nArray is Full...");
    else
        a[++top]=val;
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
        a[top--];
}
int display()
{
    for (int i=0;i<=top;i++)
        printf(" %d",a[i]);
        printf("\n");
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(90);
    // delete();
    // delete();
    // delete();
    // delete();
    display();
}*/






#include <stdio.h>
#define n 5
int a[n];
int top = -1;
void dis()
{
	if (top < 0)
		printf("Array is empty....");
	else
	{
		for (int i = 0; i <= top; i++)
			printf("%d ", a[i]);
	}
	printf("\n");
}
void insertEnd(int val)
{
	if (top >= n - 1)
		printf("Array is Full....");
	else
		a[++top] = val;
}
void insertmid(int val)
{
	if (top >= n - 1)
		printf("Array is Full....");
	else
		{
			for (int i = n; i >= (n/2); i--)
			{
				a[i] = a[i-1];
			}
			a[n/2] = val;
			++top;
		}
}
void insertfirst(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else

    {
        for (int i = n; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        ++top;
        
    }
}
int main()
{
	int ch,a;
	printf("1. Insert at End");
	printf("\n2. Insert at mid");
	printf("\n3. Insert at first");
	printf("\n4. Delete at End");
	printf("\n5. Delete at mid");
	printf("\n6. Delete at first");
	printf("\n7. Display Array");

	do
	{
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch (ch)
		{
		case 1:
			printf("Enter element: ");
			scanf("%d",&a);
			insertEnd(a);
			break;
		case 2:
			printf("Enter element: ");
			scanf("%d",&a);
			insertmid(a);
			break;
        case 3:
			printf("Enter element: ");
			scanf("%d",&a);
			insertfirst(a);
			break;
		case 7:
			dis();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (ch!=0);
	
}
