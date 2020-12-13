/* 01. Implement an “Insert Front” function to insert an element at the beginning (front) Linked List.

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

node *insert_front(node *temp, int value);
node *create_linked_list();
void print_all_node(node *temp);

int main()
{
  node *head = NULL;
  int value;

  head = create_linked_list();

  print_all_node(head);


  head = insert_front(head, 50);

  print_all_node(head);

    return 0;
}

node *insert_front(node *temp, int value)
 {
   node *new_head = malloc(sizeof(node));
   new_head->data = value;
   new_head->next = temp;

   return new_head;

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



