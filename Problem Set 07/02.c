/* 02. Define an "Empty" function to check whether the Linked List is empty or not.

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
       printf("\nLinked List is Not Empty\n");
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

int is_empty(node *temp)
 {
   if(temp == NULL)
    {
      return 1;
    }

    return 0;
 }
