/* 13. Define a function to merge two Linked List. Display all the list before and after merging.

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

node *create_list1();
node *create_list2();
node *copy_list(node*list1);
node *merge_list(node *list1, node *list2);
void print_list(node *temp);

int main ()
{
    node* list1 = NULL;
    node* list2 = NULL;
    node* list3 = NULL;

    printf("Before Merging :\n");

    printf("\nList1 :\n");
    list1 = create_list1();
    print_list(list1);


    printf("List2 :\n");
    list2 = create_list2();
    print_list(list2);

    printf("\n\nAfter Merging :\n");
    list3 = merge_list(list1,list2);
    print_list(list3);

    return 0;
}

node *create_list1()
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

node *create_list2()
 {
   node *head, *temp;

   temp = (node*)malloc(sizeof(node));
   head = temp;
   temp->data = 30;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 35;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 40;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 45;
   temp->next = NULL;

   return head;
 }

node *copy_list(node*list1)
{
    node *head2, *temp;
    temp = (node*)malloc(sizeof(node)) ;
    temp->data = list1->data;
    temp->next = NULL;
    head2 = temp;
    list1 = list1 -> next;
    while (list1)
    {
        temp->next = (node*)malloc(sizeof(node)) ;
        temp = temp->next;
        temp->data = list1->data;
        temp->next = NULL;
        list1 = list1->next;
    }

    return head2;
}



node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = copy_list(list1);

    temp = head;

    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = copy_list(list2);

    return head;
}

void print_list(node *temp)
 {
   while(temp)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
   printf("\n\n");
 }
