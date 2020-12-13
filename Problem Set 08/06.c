/* 06. Implement a "Delete After" function to delete an element before a node with value 'key' of the
       Linked List. Take input 'key' and new node value from user. (Check underflow and index out of range)

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
node *delete_at(node *temp, int pos);

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

        pos++;
        delete_at(head,pos);

     }
       print_list(head);

    return 0;
}

node *create_list()
 {
   node *head, *temp;

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


node *delete_at(node *temp, int pos)
{
    while(temp)
    {
        if(pos > 4 || pos < 1)
        {
            printf("\n!!Index out of range!!\n");
            return NULL;
        }
        else
        {
            if(pos == 1)
            {
                node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                node *head = temp;
                node *prev, *next;
                int i = 1;
                while(i < pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("\n!!Linked List Underflow!!\n");
    return NULL;
}
