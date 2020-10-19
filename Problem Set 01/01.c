/*
1. Scan N( take input N from user ) values from user into an array.
Name : Maksudujjaman
ID   : 1915002517
*/
#include<stdio.h>
int main()
{
    int a[100], max_size = 100, size = 0;
    int N,i;

    printf("Enter value of N : ");
    scanf("%d",&N);
    ///printf("%d\n",&N);

        if(N>max_size)
        {
            printf("!!Array Overflow!!\n");
        }

        else
        {
            for(i=0;i<N;i++)
                {
                  size++;
                  scanf("%d",&a[i]);
                }
        }

    return 0;
}
