/*
15. Delete a value X (take input X from user) from the array shift all other value to left.If X
is not present in the given array print Element Not Found.Delete all the occurrence of the value.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,2,17,5,11,2}, max_size = 100, size = 10;
    int i,j,X,index=-1;

    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\nEnter Value X :\n");
    scanf("%d",&X);
    ///printf("%d",X);

    for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         index=i;
        }
    }
    if(index == -1)
    {
        printf("\nElement Not Found\n");
    }

    else
    {
        printf("\nBefore :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n\n");

        for(i=0;i<size;i++)
        {
          if(X == a[i])
            {
             index=i;
             for(j=index;j<size-1;j++)
             {
               a[j] = a[j+1];
             }
              size--;
            }
        }


        printf("After : \n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    }

    return 0;
}
