# [Implement an “Insert Front” function](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2009/01.c)
```c
node *insert_front(node *temp, int value)
 {
   node *new_head = malloc(sizeof(node));
   new_head->data = value;
   new_head->next = temp;

   return new_head;

 }
```
# [Implement an “Insert Back” function](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2009/02.c)
```c
node *insert_back(node *temp, int value)
 {
   node *head = temp;
   node *new_back = (node*)malloc(sizeof(node));
   new_back->data = value;
   new_back->next = NULL;

   while(temp->next)
    {
      temp = temp->next;
    }
    temp->next = new_back;

    return head;

 }
 ```
 # [Implement an “Insert At” function (Check index out of range](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2009/03.c)
 ```c
 node *insert_at(node *temp, int pos, int value)
 {
    node *head = temp, *prev = temp;
    int p = 1;

    if(pos < 1 || pos > 4)
     {
        printf("\n!!Index out of range!!\n\n");
        return temp;
     }

   while(temp)
    {
      if(p == pos)
       {
         if(temp == head)
          {
            node *new_node = malloc(sizeof(node));
            new_node->data = value;
            new_node->next = head;
            head = new_node;
            return head;
          }
         else
          {
            node *new_node = malloc(sizeof(node));
            new_node->data = value;
            new_node->next = prev->next;
            prev->next = new_node;
            return head;
          }
       }

      prev = temp;
      temp = temp->next;
      p++;
    }

    node *new_node = malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;
    prev->next = new_node;

    return head;
 }
 ```
 # [Implement an “Insert After” function (Check index out of range)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2009/04.c)
 ```c
 node *insert_after(node *temp, int key, int value)
 {
    node *head = temp;
    int i = 0;
    while(temp)
     {
        if(temp->data == key)
         {
            node *new_node = (node*) malloc(sizeof (node) );
            new_node->data = value;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
         }
        temp = temp->next;
     }
    if(i<1 || i>4)
     {
        printf("\n!!Index out of range!!\n\n");
     }

    return head;
 }
 ```
  # [Implement an “Insert Before” function (Check index out of range)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2009/05.c)
 ```c
 node *insert_before(node *temp, int key, int value)
 {
    node *head = temp, *prev = temp;
    int i = 0;
    int j = 0;
    while(temp)
     {
        if(temp->data == key)
         {
            if(temp == head)
             {
                node *new_node = (node*) malloc(sizeof(node*)) ;
                new_node->data = value;
                new_node->next = temp;
                i++;
                return new_node;
             }
            else
             {
                node *new_node = (node*) malloc(sizeof(node*));
                new_node->data = value;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
             }
         }
        prev = temp;
        temp = temp->next;
     }
    if(i < 1 || i > 4 || j < 1 || j > 4)
     {
       printf("!!\nIndex out of range\n\n");
     }
    return head;
 }
 ```
