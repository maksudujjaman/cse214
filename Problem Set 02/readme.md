# Variable Decleration
```c
int i, j; /// i & j is int type data
int X; // X is Value
int K; // K is Position or Index
```
# Inserting Value in Particular Index
```c
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}size = 10;
X = Value;   /// Inserting "Value" in "Kth" index
a[K] = X;    ///value assign
for(i=0; i<size; i++)
{
printf("%d ", a[i]);
}
```
# Inserting Value in Particular Index & Shifting Others Value to the Right
```c
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}size = 10;
for(i=size-1;i>=K;i--)
{
  a[i+1] = a[i];  /// shifting
}

a[K] = X; /// insering value
size++;   /// increasing size
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
```
# Inserting Value in After Particular Index & Shifting Others Value to the Right
```c
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}size = 10;
k++;/// after so index increases
for(i=size-1;i>=K;i--)
{
  a[i+1] = a[i];  /// shifting
}

a[K] = X; /// insering value
size++;   /// increasing size
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
```
# Inserting Value in Before Particular Index & Shifting Others Value to the Right
```c
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}size = 10;
k--; /// before 3rd index means after 2nd index---using this theory
for(i=size-1;i>=K;i--)
{
  a[i+1] = a[i];  /// shifting
}

a[K] = X; /// insering value
size++;   /// increasing size
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
```
# Updating Specific Index Or Value
```c
a[k] = value;
a[K] = X; /// updating "Kth" index with value "X"
printf("After :\n");
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
```
# Search Operation & Found Not Found(print -1) With Value
```c
flag=0; /// if flag changes then "found", if flag is zero then "not found"
for(i=0;i<size;i++)
    {
      if(X == a[i]) /// X is the given value to find
        {
         flag = 1;
        }
    }

    if(flag==1)
    {
     printf("\nFound\n");
    }
    else
    {
     printf("\nNot Found\n");
    }
```
# Search Operation & Found Not Found(print -1) With Index
```c
index = -1;  /// if index is greater then -1 then found, if index remains -1 then prints -1 or "not found"
for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         index = i;
        }
    }
    
    if(index==-1)
    {
     printf("%d",index);
    }
    else
    {
     printf("%d",index);
    }
```
# Delete an value of an Index and shift all other value to the left
```c
k--; /// K is the the index number that want to delete
for(i=K;i<size-1;i++)
        {
          a[i] = a[i+1]; /// shifting values to left
        }
         size--;
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
```
# Search and Delete a value and shift all other value to the left
```c
for(i=0;i<size;i++)
    {
      if(X == a[i])  /// searching value where X is the value
        {
         index=i;
         break;
        }
    }
    
      for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  /// shifting values to left
          }
           size--; /// value deleted so size decreases
      for(i=0;i<size;i++)
      {
         printf("%d ",a[i]);
      }
```
# Search and Delete a value Before and shift all other value to the left (First Occurrence)
```c
for(i=0;i<size;i++)
    {
      if(X == a[i])  /// searching value where X is the value
        {
         index=i;
         index--;/// delete before so index decreases
         break;
        }
    }
    
      for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  /// shifting values to left
          }
           size--; /// value deleted so size decreases
      for(i=0;i<size;i++)
      {
         printf("%d ",a[i]);
    }
```
# Search and Delete a value After and shift all other value to the left (First Occurrence)
```c
for(i=0;i<size;i++)
    {
      if(X == a[i])  /// searching value where X is the value
        {
         index=i;
         index++; /// delete after so index increases
         break;
        }
    }
    
      for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  /// shifting values to left
          }
           size--; /// value deleted so size decreases
      for(i=0;i<size;i++)
      {
         printf("%d ",a[i]);
      }
```
# Search and Delete a value and shift all other value to the left (All Occurrence)
```c
/* if X is not found then print "Element Not Found" */
for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         index=i;
        }
    }
    for(i=0;i<size;i++)
        {
          if(X == a[i]) 
            {
             index=i; /// found & deleted
             for(j=index;j<size-1;j++)
             {
               a[j] = a[j+1];
             }
              size--;
            }
        }
     for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
```
