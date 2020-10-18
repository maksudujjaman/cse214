/*
3. Insert value X(take input X from user) in the array at the third(3rd)
   index and shift all other value to the right.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,13,17,19,23,29}, max_size = 100, size = 10;
    int i,X;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("Enter Value X :\n");
    scanf("%d",&X);
    ///printf("%d",X);

    printf("\nBefore :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    int index = 3;
    for(i=size-1;i>=index;i--)
    {
       a[i+1] = a[i];
    }

    printf("Middle :\n");
    for(i=0;i<size+1;i++)
    {
       printf("%d ",a[i]);
    }
     a[index] = X;
     size++;

    printf("\n\nAfter :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}



