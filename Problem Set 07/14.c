/* 14. Define a function to merge two sorted Linked List into a sorted Linked List. Display all the list before and after merging. (Consider given two linked list are already sorted)

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

node* create_list1();
node* create_list2();
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
   temp->data = 3;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 5;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 7;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 9;
   temp->next = NULL;

   return head;
 }

node *create_list2()
 {
   node *head, *temp;

   temp = (node*)malloc(sizeof(node));
   head = temp;
   temp->data = 11;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 13;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 15;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 17;
   temp->next = NULL;

   return head;
 }

node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = create_list1(list1);
    temp = head;

    while(temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = create_list2(list2);
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
