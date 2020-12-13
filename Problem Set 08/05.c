/* 05. Implement a "Delete Before" function to delete an element before a node with value 'key' of the
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

node *delete_before(node *temp, int key);
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
  head = delete_before(head, value);

  print_all_node(head);

    return 0;
}

node *delete_before(node *temp, int value)
{
	node *head, *temp2, *temp3;
	head = temp;
	if(temp == NULL)
    {
      printf("\n!!Linked List Underflow!!\n");
    }
	else if(value == temp->data)
	{
		printf("\n!!Index out of range!!\n\n");
	}
	else
	{
		if(value == temp->next->data)
		{
			temp3 = temp;
			temp = temp->next;
			free(temp3);
		}
		else
		{
			while(head->next->next->data != value && head->next->next != NULL)
			{
				head = head->next;
			}
			if(head->next->next->data == value)
			{
				temp2 = head->next;
				head->next = head->next->next;
				free(temp2);
			}
		}
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

