/* 10. Define a function to reverse the Linked List using a recursive function. Display both List before and after reversing.

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
node *reverse_list(node *list);

int main()
{
    node *head = NULL;

    head = create_list();

    printf("Before Reversing : \n");
    print_list(head);


    printf("After Reversing : \n");
    print_list_reverse(head);
    printf("\n\n");

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

void print_list(node *temp)
 {
   while(temp)
    {
      printf("%d ",temp->data);
      temp = temp->next;
    }
   printf("\n\n");
 }

void print_list_reverse(node *temp)
{
    if (temp != NULL) {
        print_list_reverse(temp->next);
        printf("%d ", temp->data);
    }
}
