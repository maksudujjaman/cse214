/* Use Dynamic Memory Allocation to create three elements of the Linked List and display(only value)
   the complete linked list using a function(check Empty list).

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

void print_all_node(node *temp);

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

    print_all_node(head);

    return 0;
}

void print_all_node(node *temp)
 {
    if(temp == NULL)
     {
       printf("\n!!Linked List Empty!!\n");
     }

    else
     {
        while(temp != NULL)
         {
           printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
           temp = temp->next;
         }
     }
 }

