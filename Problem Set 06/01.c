/* Define a Structure for linked list Node,Declare three variable, Assign value and next address
   in those variable. Print the variable address, value and next variable address.
   (Don't use any function, "typedef"keyword and Dynamic Memory Allocation(DMA)).

   Name : Maksudujjaman
   ID   : 1915002517
*/

#include<stdio.h>

struct Node
{
   int data;
   struct Node *next;
};

int main()
{
    struct Node a, b, c;
    struct Node *head = &a;

    a.data = 10;
    a.next = &b;

    b.data = 15;
    b.next = &c;

    c.data = 20;
    c.next = NULL;

    while(head != NULL)
     {
       printf("%d \t %d \t %d \n\n",head, head->data, head->next);
       head = head->next;
     }


    return 0;
}
