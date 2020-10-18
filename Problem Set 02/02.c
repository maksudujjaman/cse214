/*
2. Insert value X(take input X from user) in the array at the end of currently stored elements.
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

    printf("Before :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    a[size] = X;
    size++;

    printf("After :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}



