/*
1.
Mock Class Test
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100], max_size = 100, size = 0;
    int i=0;

    printf("Enter values :\n");
    ///while((scanf("%d",&a[i])) && a[i] !=0)
    while((scanf("%d",&a[i]))!=EOF)
      {
         i++;
         size++;
         if(size>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
           break;
         }
       }

       printf("Array Print & Separated by Comma : ");
       for(i=0;i<size;i++)
        {
        printf("%d",a[i]);
        if(i<=size-2)
         {
          printf(",");
         }
        }
        printf("\n\n");


        printf("Array In Reverse Order : ");
        for(i=size-1;i>=0;i--)
        {
            printf("%d ",a[i]);
        }
        printf("\n\n");


    return 0;
}

