/* Define a function to print single node (Address, Value,and Next address) of the Linked List
   and do the same as problem 1.(Use 'typedef' keyword ,Don't use DMA).

   Name : Maksudujjaman
   ID   : 1915002517
*/

#include<stdio.h>

typedef struct Node node;

struct Node
{
   int data;
   node *next;
};

void print_single_node(node *temp);

int main()
{
    node a, b, c;
    node *head = &a;

    a.data = 10;
    a.next = &b;

    b.data = 15;
    b.next = &c;

    c.data = 20;
    c.next = NULL;

    while(head != NULL)
     {
       print_single_node(head);
       head = head->next;
     }

    return 0;
}

void print_single_node(node *temp)
 {
   printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
 }
