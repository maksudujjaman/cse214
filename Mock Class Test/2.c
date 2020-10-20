/*
2. Insert value X(take input X from user) in the array at Kth(take input K from user)
   index and shift all other value to the right. And Print the whole array. After the
   above operation reverse the array within the same array. And print the whole array.
Mock Class Test
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,3,5,7,9,11,13,15,17,19}, max_size = 100, size = 10;
    int i,X,K,temp;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("Enter Value X :\n");
    scanf("%d",&X);

    printf("Enter Index K :\n");
    scanf("%d",&K);

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


        for(i=0;i<size/2;i++)
        {
          temp = a[i];
          a[i] = a[size-1-i];
          a[size-1-i] = temp;
        }

        printf("\n\nReversed Array :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");

    }

    return 0;
}
