/* Define a function to display(only value for each node)the complete linked list
   and do the same as problem 1(Don't use DMA).

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

void print_all_node(node *temp);

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

    print_all_node(head);

    return 0;
}

void print_all_node(node *temp)
 {
    while(temp != NULL)
     {
       printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
       temp = temp->next;
     }
 }
