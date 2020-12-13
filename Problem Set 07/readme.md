# [Define a "Create" function to declare a Linked List with four node(Using DMA)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/01.c)
```c
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
 ```
# [Define an "Empty" function to check whether the Linked List is empty or not](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/02.c)
```c
int is_empty(node *temp)
 {
   if(temp == NULL)
    {
      return 1;
    }

    return 0;
 }
```
# [Define a "Size" function to find the size of the Linked List](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/03.c)
```c
void size(node *temp)
 {
   int count = 0;

   while(temp)
    {
      temp = temp->next;
      count++;
    }
    printf("\nLinked List Size : %d\n",count);
 }
```
# [Define a "Front" function to display the first element of the Linked List](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/04.c)
```c
void front(node *temp)
 {
    printf("\nFront Element : %d\n",temp->data);
 }
```
# [Define a "Back" function to display the first element of the Linked List](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/05.c)
```c
void back(node *temp)
 {
    while(temp->next)
    {
      temp = temp->next;
    }
    printf("\nBack Element : %d\n",temp->data);
 }
```
# [Define a function to display the nth element of the Linked List(Take input 'n' from user & Check index out of range)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/06.c)
```c
 if(is_empty(head) == 1)
     {
       printf("\n!!Linked List is Empty!!\n");
     }

    else if(is_empty(head) == 0)
     {
       printf("Enter n : ");
       scanf("%d",&n);

       if(n > 4)
        {
          printf("\n!!Index Out of Range!!\n");
        }

       else if(n <= 0)
        {
          printf("\n!!Invalid Index!!\n");
        }

       else
        {
          print_list_n(head, n);
        }
     }
 ```
 ```c
void print_list_n(node *temp, int pos)
 {
   int n =1;
   while(n <= pos)
    {
      printf("%d ",temp->data);
      temp = temp->next;
      n++;
    }
   printf("\n");
 }
```
# [Define a "Search" function to find a 'key' (take input 'key' from user). Print "Found" if the search 'key' is found otherwise "Not Found"](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2007/07.c)
```c
void find_key(node *temp, int key)
 {
   int count = 0;

   while(temp)
    {
      if(key == temp->data)
        {
         count++;
        }
       temp = temp->next;
    }

      if(count == 0)
        {
          printf("\nNot Found\n");
        }
       else
        {
          printf("\nFound\n");
        }
 }
 ```
