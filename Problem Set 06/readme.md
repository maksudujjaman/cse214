# [Define, Create, Initialization & Decleration Basic patterns(For Structure & LinkedList):]
```c
//Structure Definition:
struct Structure_Name {
    dataType Variable_Name;
    dataType Variable_Name;
    ...       ...
};

// Structure  Declaration:
struct Structure_Name Variable_Name;

//Structure Value Assign:
Variable_Name.Member_Name = Value;

//Structure Output Pattern:
printf("%d %d\n", p.x, p.y);

//Typedef Apply:
typedef struct Structure_Name New_DataType_Name;
```

# [Decleration & Initialization of Linked List](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2006/01.c)
```c
   struct Node   // a node named structure create
{
    int value;   //value declare
    struct Node *next;  //next node address declare
};
```
```c
    struct node a, b, c;   //structure decleration
    struct Node *head = &a; /// hold First Node_address into a pointer named head for accessing

    a.value = 10;  ///value assign in node
    a.next = &b;  ///next node address assign 

    b.value = 15;  ///value assign in node
    b.next = &c;  ///next node address assign 

    c.value = 20;  ///value assign in node
    c.next = NULL;  ///last node is defined if next address is assigned with NULL.
```
```c
    while(head != NULL)
    {
        printf("%p \t %d \t %p\n", head, head->value, head->next);
        head = head->next;
    }
  ```
# [Define a  function to print Single Node (Address, Value and Next address) of the Linked List of Linked List](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2006/02.c)
```c
void print_single_node(node *temp)
 {
   printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
 }
 ```
 # [Define a function to display complete Linked List(Only Value Of Each Node)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2006/03.c)
 ```c
 void print_all_node(node *temp)
 {
    while(temp != NULL)
     {
       printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
       temp = temp->next;
     }
 }
 ```
 
 # [Use DMA to create three elements of the Linked List and display(only value) the complete linked list & Check Empty List](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2006/04.c)
```c

    temp = (node*)malloc(sizeof (node));
    temp->data = 10;
    temp->next = (node*)malloc(sizeof (node));
    head = temp;

    temp = temp->next;
    temp->data = 15;
    temp->next = (node*)malloc(sizeof (node));

    temp = temp->next;
    temp->data = 20;
    temp->next = NULL;
```
```c
    void print_all_node(node *temp)
 {
    if(temp == NULL)
     {
       printf("\n!!Linked List Empty!!\n");
     }

    else
     {
        while(temp != NULL)
         {
           printf("%d \t %d \t %d \n\n",temp, temp->data, temp->next);
           temp = temp->next;
         }
     }
 }
```

# [Define a Recursive function to display complete Linked List(Only Value Of Each Node)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2006/05.c)
```c
 if(is_empty(head) == 1)
     {
       printf("!!Linked List is Empty!!\n");
     }
    else if(!is_empty(head))
     {
       print_all_node_recur(head);
       printf("\n");
     }
```     
```c
     int is_empty(node *temp)
  {
    if(temp == NULL)
     {
       return 1;
     }
    else
     {
       return 0;
     }
  }
```
```c
void print_all_node_recur(node *temp)
 {

    if(temp != NULL)
     {
       printf("%d ",temp->data);
       print_all_node_recur(temp->next);
     }
 }
 ```
# [Define a Recursive function to display complete Linked List in Reverse Order(Only Value Of Each Node)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2006/06.c)
```c
    if(is_empty(head) == 1)
     {
       printf("!!Linked List is Empty!!\n");
     }
    else if(!is_empty(head))
     {
       print_all_node_rev_recur(head);
       printf("\n");
     }

    return 0;
}
```
```c
int is_empty(node *temp)
  {
    if(temp == NULL)
     {
       return 1;
     }
    else
     {
       return 0;
     }
  }
  ```
  ```c
void print_all_node_rev_recur(node *temp)
 {

    if(temp != NULL)
     {
       print_all_node_rev_recur(temp->next);
       printf("%d ",temp->data);
     }
 }
```
