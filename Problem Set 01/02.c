/*
2. Scan values from user into an array until end of file.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100], max_size = 100, size = 0;

    printf("Enter values :\n");

    int i=0;
    while((scanf("%d",&a[i]))==1)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
           break;
         }
      }

/*    while((scanf("%d",&a[i]))!=EOF)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
         }
      } */

/*    while((scanf("%d",&a[i]))!=-1)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
         }
      } */

    return 0;
}
