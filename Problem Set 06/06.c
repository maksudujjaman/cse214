/* 06. Define a function to display the complete linked list in reverse order with a recursive function using problem-04.

   Name : Maksudujjaman
   ID   : 1915002517
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node
{
   int data;
   node *next;
};

void print_all_node_rev_recur(node *temp);
int is_empty(node *temp);

int main()
{
    node *temp;
    node *head = NULL;

    temp = (node*)malloc(sizeof (node));
    temp->data = 10;
    temp->next = (node*)malloc(sizeof (node));
    head = temp;

    temp = temp->next;
    temp->data = 15;
    temp->next = (node*)malloc(sizeof (node));

    temp = temp->next;
    temp->data = 20;
    temp->next = NULL;


    if(is_empty(head) == 1)
     {
       printf("!!Linked List is Empty!!\n");
     }
    else if(!is_empty(head))
     {
       print_all_node_rev_recur(head);
       printf("\n");
     }

    return 0;
}

void print_all_node_rev_recur(node *temp)
 {

    if(temp != NULL)
     {
       print_all_node_rev_recur(temp->next);
       printf("%d ",temp->data);
     }
 }

int is_empty(node *temp)
  {
    if(temp == NULL)
     {
       return 1;
     }
    else
     {
       return 0;
     }
  }
