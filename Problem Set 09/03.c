/* 03. Implement an “Insert At” function to insert an element at the nth index of the Linked List. Take input ‘n’ and data from user.(Check index out of range)
       (Let,for the first element n = 1)

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

node *insert_at(node *temp, int pos, int data);
node *create_linked_list();
void print_all_node(node *temp);

int main()
{
  node *head = NULL;
  int data;

  head = create_linked_list();

  print_all_node(head);


  head = insert_at(head, 3, 300);

  print_all_node(head);

    return 0;
}


node *insert_at(node *temp, int pos, int value)
 {
    node *head = temp, *prev = temp;
    int p = 1;

    if(pos < 1 || pos > 4)
     {
        printf("\n!!Index out of range!!\n\n");
        return temp;
     }

   while(temp)
    {
      if(p == pos)
       {
         if(temp == head)
          {
            node *new_node = malloc(sizeof(node));
            new_node->data = value;
            new_node->next = head;
            head = new_node;
            return head;
          }
         else
          {
            node *new_node = malloc(sizeof(node));
            new_node->data = value;
            new_node->next = prev->next;
            prev->next = new_node;
            return head;
          }
       }

      prev = temp;
      temp = temp->next;
      p++;
    }

    node *new_node = malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    prev->next = new_node;

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

void print_all_node(node *temp)
  {
    while(temp)
     {
      printf("%d ",temp->data);
      temp = temp->next;
     }
     printf("\n\n");
  }




