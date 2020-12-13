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

int main()
{
    struct node a, b, c;   //structure decleration
    struct Node *head = &a; /// hold First Node_address into a pointer named head for accessing

    a.value = 10;  ///value assign in node
    a.next = &b;  ///next node address assign 

    b.value = 15;  ///value assign in node
    b.next = &c;  ///next node address assign 

    c.value = 20;  ///value assign in node
    c.next = NULL;  ///last node is defined if next address is assigned with NULL.

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
