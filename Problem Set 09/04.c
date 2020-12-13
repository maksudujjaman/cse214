/* 04. Implement an “Insert After” function to insert an element after a node with value ‘key’ of the Linked List. Take input ‘key’ and new node value from user. (Check index out of range)

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

node *insert_after(node *temp, int key, int value);
node *create_linked_list();
void print_all_node(node *temp);

int main()
{
  node *head = NULL;
  int key, value;

  head = create_linked_list();

  print_all_node(head);

  printf("Enter Key : ");
  scanf("%d",&key);
  printf("\nEnter Value : ");
  scanf("%d",&value);
  head = insert_after(head, key, value);

  print_all_node(head);

    return 0;
}

node *insert_after(node *temp, int key, int value)
 {
    node *head = temp;
    int i = 0;
    while(temp)
     {
        if(temp->data == key)
         {
            node *new_node = (node*) malloc(sizeof (node) );
            new_node->data = value;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
         }
        temp = temp->next;
     }
    if(i<1 || i>4)
     {
        printf("\n!!Index out of range!!\n\n");
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

void print_all_node(node *temp)
  {
    while(temp)
     {
      printf("%d ",temp->data);
      temp = temp->next;
     }
     printf("\n\n");
  }




