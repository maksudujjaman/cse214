/*
7. Print the array elements in reverse order. Each element should be separated by space.
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

    int j,temp;
    for(i=0;i<size/2;i++)
    {
         temp = a[i];
         a[i] = a[size-1-i];
         a[size-1-i] = temp;
    }


    printf("After :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");


/*    for(i=size-1;i>=0;i--)
    {
       printf("%d ",a[i]);
    }
    printf("\n"); */




    return 0;
}


