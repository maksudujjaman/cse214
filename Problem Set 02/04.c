/*
4. Insert value X(take input X from user) in the array at Kth(take input K from user)
index and shift all other value to the right.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,13,17,19,23,29}, max_size = 100, size = 10;
    int i,X,K;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("Enter Value X :\n");
    scanf("%d",&X);
    ///printf("%d",X);

    printf("Enter Index K :\n");
    scanf("%d",&K);
    ///printf("%d",K);

    if(K<0 || K>=max_size)
    {
      printf("\nArray Index Out of Bound\n");
    }

    else if(K>size)
    {
      printf("\nArray Index Out of Range\n");
    }

    else
    {
        printf("\nBefore :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n\n");

        for(i=size-1;i>=K;i--)
        {
           a[i+1] = a[i];
        }

        printf("Middle :\n");
        for(i=0;i<size+1;i++)
        {
           printf("%d ",a[i]);
        }
         a[K] = X;
         size++;

        printf("\n\nAfter :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");

    }

    return 0;
}
