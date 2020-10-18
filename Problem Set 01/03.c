/*
3. Scan values from user into an array until user input is 0(zero).
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100], max_size = 100, size = 0;

    printf("Enter values :\n");

    int i=0;
    while((scanf("%d",&a[i])) && a[i]!=0)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
           break;
         }

      }

 /*
   while(scanf("%d",&a[i]))
    {
      if(a[i]==0)
      {
          break;
      }
    } */

    return 0;
}

