/*
13. Delete a value before X (take input X from user) from the array shift all other value to left. If X is not
present in the given array print "Element Not Found". Only delete the first occurrence of the value.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,2,17,5,23,2}, max_size = 100, size = 10;
    int i,X,index=-1;

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
         index--;
         break;
        }
    }
     ///printf("%d\n",index);


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

        for(i=index;i<size-1;i++)
            {
              a[i] = a[i+1];
            }
             size--;

        printf("After :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    }

    return 0;
}
