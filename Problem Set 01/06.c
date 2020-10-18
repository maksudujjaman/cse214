/*
6. Print entire array each element separated by comma.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, max_size = 100, size = 10;
    int i;

    printf("Before :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("After :\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        if(i<=size-2)
        {
            printf(",");
        }
    }
    printf("\n");

/*    printf("%d",a[0]);
    for(i=1;i<size;i++)
    {
       printf(",%d",a[i]);
    }
    printf("\n");
*/

/*  for(i=0;i<size-1;i++)
    {
       printf("%d,",a[i]);
    }
    printf("%d",a[size-1]);
*/

    return 0;
}

