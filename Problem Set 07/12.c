/* 12. Copy a Linked List into another Linked List with a recursive function. Display both List before and after Copy.

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
node *copy_list_recursive(node *list1);

int main()
{

    node *head = NULL;
    node *list2 = NULL;

    head = create_list();

    list2 = copy_list_recursive(head);

    printf("\nBefore Copy :\n");
    print_list(head);

    printf("\nAfter Copy :\n");
    print_list(list2);

    return 0;
}

node *create_list()
 {
   node *head, *temp;

   temp = (node*)malloc(sizeof(node));
   head = temp;
   temp->data = -2;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 1;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 0;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = -4;
   temp->next = NULL;

   return head;
 }

void print_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

node *copy_list_recursive(node *list1)
{
    if(list1 == NULL)
    {
        return NULL;
    }
    node *temp = (node*)malloc(sizeof(node));
    temp->data = list1->data;
    temp->next = copy_list_recursive(list1->next);

    return temp;
}
