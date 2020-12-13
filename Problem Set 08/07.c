/* 07. Implement a “Clear” function to delete the all the element of the Linked List

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

node *clear(node *temp);
node *create_linked_list();
void print_all_node(node *temp);

int main()
{
  node *head = NULL;
  int value;

  head = create_linked_list();

  print_all_node(head);


  if(clear(head) == NULL)
    {
      printf("\nLinked List Empty\n");
    }

    return 0;
}

node *clear(node *temp)
 {
   node *head = temp, *prev;

   while(temp)
    {
     prev = temp;
     temp = temp->next;
     free(prev);
    }

    return NULL; 
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

void print_all_node(node *temp)
  {
    while(temp)
     {
      printf("%d ",temp->data);
      temp = temp->next;
     }
     printf("\n\n");
  }



