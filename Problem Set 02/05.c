/*
5. Update fifth(5th) index with another value.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,13,17,19,23,29}, max_size = 100, size = 10;
    int i;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("Before :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

     a[5] = 55;

    printf("After :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
