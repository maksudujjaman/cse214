/* 03. Implement a “Delete Value” function to delete a value (key) from the Linked List. Take input the delete ‘key’ from user. (Check Underflow and Not Found)

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

node *delete_value(node *temp, int key);
node *create_linked_list();
void print_all_node(node *temp);

int main()
{
  node *head = NULL;
  int value;

  head = create_linked_list();

  print_all_node(head);

  printf("Delete Element : ");
  scanf("%d",&value);
  head = delete_value(head, value);

  print_all_node(head);

    return 0;
}

node *delete_value(node *temp, int key)
 {
    if (temp)
     {
        node *head = temp, *prev = temp;
        while(temp)
         {
            if(temp->data == key)
             {
                if(head == temp)
                 {
                    head = temp->next;
                    free(temp);
                    return head;
                 }
                else
                 {
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                 }
             }
            prev = temp;
            temp = temp->next;
         }
        printf("\nNot Found\n");
        return head;
     }
    else
     {
       printf("\n!!Linked List Underflow!!\n");
     }
    return temp;
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

