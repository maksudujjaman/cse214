/* 03. Define a "Size" function to find the size of the Linked List.

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

void size(node *temp);
void print_list(node *temp);
int is_empty(node *temp);
node *create_list();

int main()
{
    node *head = NULL;

    head = create_list();

    if(is_empty(head) == 1)
     {
       printf("\n!!Linked List is Empty!!\n");
     }

    else if(is_empty(head) == 0)
     {
       print_list(head);
       size(head);
     }


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

void size(node *temp)
 {
   int count = 0;

   while(temp)
    {
      temp = temp->next;
      count++;
    }
    printf("\nLinked List Size : %d\n",count);
 }

int is_empty(node *temp)
 {
   if(temp == NULL)
    {
      return 1;
    }

    return 0;
 }

