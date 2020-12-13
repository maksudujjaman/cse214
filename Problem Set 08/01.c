/* 01.Implement a “Delete Back” function to delete the last(back) element of the Linked List. (Check Underflow)

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

node *delete_back(node *temp);
node *create_linked_list();
void print_all_node_value(node *temp);

int main()
{
  node *head = NULL;
  head = create_linked_list();

  print_all_node_value(head);

  head = delete_back(head);

  print_all_node_value(head);

    return 0;
}

node *delete_back(node *temp)
 {
   node *head = temp;

   if(head == NULL)
    {
      printf("\n!!Linked List Underflow!!\n");
    }
   else
    {
       while(temp->next->next)
        {
          temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

   return head;
 }

node *create_linked_list()
 {
  node *temp, *head;

  temp = (node*)malloc(sizeof (node));
  temp->data = 20;
  temp->next = (node*)malloc(sizeof (node));
  head = temp;

  temp = temp->next;
  temp->data = 35;
  temp->next = (node*)malloc(sizeof (node));

  temp = temp->next;
  temp->data = 24;
  temp->next = (node*)malloc(sizeof (node));

  temp = temp->next;
  temp->data = 52;
  temp->next = NULL;

  return head;
 }

void print_all_node_value(node *temp)
  {
    while(temp)
     {
      printf("%d ",temp->data);
      temp = temp->next;
     }
     printf("\n\n");
  }
