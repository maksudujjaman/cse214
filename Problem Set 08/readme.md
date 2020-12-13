# [Implement a “Delete Back” function & check Underflow](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/01.c)
```c
node *delete_back(node *temp)
 {
   node *head = temp;

   if(head == NULL)
    {
      printf("\n!!Linked List Underflow!!\n");
    }
   else
    {
       while(temp->next->next)
        {
          temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

   return head;
 }
```
# [Implement a “Delete Front” function & check Underflow](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/02.c)
```c
node *delete_front(node *temp)
 {
   node *head = temp;

   if(head == NULL)
    {
      printf("\n!!Linked List Underflow!!\n");
    }
   else
    {
      head = temp->next;
      free(temp);
    }

   return head;
 }
 ```
 # [Implement a “Delete Value” function (check Underflow and Not Found)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/03.c)
 ```c
 node *delete_value(node *temp, int key)
 {
    if (temp)
     {
        node *head = temp, *prev = temp;
        while(temp)
         {
            if(temp->data == key)
             {
                if(head == temp)
                 {
                    head = temp->next;
                    free(temp);
                    return head;
                 }
                else
                 {
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                 }
             }
            prev = temp;
            temp = temp->next;
         }
        printf("\nNot Found\n");
        return head;
     }
    else
     {
       printf("\n!!Linked List Underflow!!\n");
     }
    return temp;
 }
 ```
 # [Implement a “Delete At” function(Check Underflow and index out of range](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/04.c)
 ```c
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
```
# [Implement a "Delete Before" function (Check underflow and index out of range)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/05.c)
```c
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
```
# [Implement a "Delete After" function (Check underflow and index out of range)](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/06.c)
## First sesrch the Position of the Element
```c
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
 ```

## Then Delete the Position After Element
```c
print_list(head);

       printf("\nEnter Key : ");
       scanf("%d",&key);

       int pos = search(head,key);

        pos++;
        delete_at(head,pos);
```
```c
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
```
# [ Implement a “Clear” function to Delete the all the Element](https://github.com/1915002517/cse214/blob/main/Problem%20Set%2008/07.c)
```c
node *clear(node *temp)
 {
   node *head = temp, *prev;

   while(temp)
    {
     prev = temp;
     temp = temp->next;
     free(prev);
    }

    return NULL; 
 }
 ```
