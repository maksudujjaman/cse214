/*
4. Print entire array each element in newline.
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
            printf("\n");
        }
    }
     printf("\n");

/*    for(i=0;i<size;i++)
    {
       printf("%d\n",a[i]);
    }
*/
    return 0;
}
