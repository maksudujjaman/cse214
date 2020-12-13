/* 01. Define a "Create" function to declare a Linked List with four node using dynamic memory allocation.
       Print the complete Linked List after calling create function.

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

node *create_list();
void print_list(node *temp);

int main()
{
    node *head = NULL;

    head = create_list();

    print_list(head);


    return 0;
}

node *create_list()
 {
   node *head, *temp;

   temp = (node*)malloc(sizeof(node));
   head = temp;
   temp->data = 10;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 15;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 20;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 25;
   temp->next = NULL;

   return head;
 }

void print_list(node *temp)
 {
   while(temp)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
   printf("\n");
 }
