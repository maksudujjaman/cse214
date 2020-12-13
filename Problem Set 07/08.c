/* 08. Define a "Search" function to find a 'key' (take input 'key' from user). Return the position of the node if the search 'key' is found in the Linked List otherwise return -1.

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

int search(node *temp, int key);
void print_list(node *temp);
int is_empty(node *temp);
node *create_list();

int main()
{
    node *head = NULL;
    int key;

    head = create_list();

    if(is_empty(head) == 1)
     {
       printf("\n!!Linked List is Empty!!\n");
     }

    else
     {
       print_list(head);

       printf("\nEnter Key : ");
       scanf("%d",&key);

       int pos = search(head,key);

       if(pos == -1)
        {
          printf("\n-1\n");
        }

       else
        {
         printf("\nPosition : %d\n",pos);
        }

     }

    return 0;
}

node *create_list()
 {
   node *head, *temp;

   temp = (node*)malloc(sizeof(node));
   head = temp;
   temp->data = 25;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 105;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 90;
   temp->next = (node*)malloc(sizeof(node));

   temp = temp->next;
   temp->data = 300;
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
   printf("\n");
 }

int search(node *temp, int key)
 {
   int pos = 1;
   while(temp)
    {
        if(temp->data == key)
         {
           return pos;
         }
      pos++;
      temp = temp->next;
    }

    return -1;
 }

int is_empty(node *temp)
 {
   if(temp == NULL)
    {
      return 1;
    }

    return 0;
 }
