/*
8. Search a value X(take input X from user) in the array and print the index
   if X found in the array otherwise print -1.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,13,17,19,23,29}, max_size = 100, size = 10;
    int i,X,index=-1;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("Enter Value X :\n");
    scanf("%d",&X);
    ///printf("%d",X);

    for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         index = i;
        }
    }

    if(index==-1)
    {
     printf("\n%d\n",index);
    }
    else
    {
     printf("\n%d\n",index);
    }

    return 0;
}
