# Array Declaration

```c
int a[10]; /* "a" is integer data type array and 10 is the maximum number of value/element/items can be stored in "a" array. */
```
# Array Initialization

```
int a[10] = {2,4,6,8,10,12}; /* maximum 10 value/element/items can be stored in the array. 6 elements are currently stored in "a" array so size of the array is 6*/ 
```
# Array Insertion (User Input) 
```
for(i = 0; i<size; i++) 
{
 scanf("%d",&a[i]); 
}
```
# Array Access (Intialized Element) 
```
int a[10] = {2,4,6,8,10,12};
for(i = 0; i<size; i++) 
{
 printf("%d",&a[i]); 
}
```
# Array Access (User Input) 
```
int a[10] = {2,4,6,8,10,12};
for(i = 0; i<size; i++) 
{
 printf("%d",&a[i]); 
}
```
# Printing an Array (Using Loop) 
```
size = 6;
int a[10] = {1,2,3,4,5,6};
for(i = 0; i<size; i++) 
{
 printf("%d",&a[i]); 
}
```
# Printing an Array in Reverse Order
```c

    for(i=0;i<size/2;i++) /// array reversed during half loop is complete
    {
         temp = a[i]; /// here we're storing value of a[i]
         a[i] = a[size-1-i]; 
         a[size-1-i] = temp; /// value returned
    }
    /// alternative 
    /// sratring the from last index
    for(i=size-1;i>=0;i--)
    {
       printf("%d ",a[i]);
    }
```  
# End of File or Input Particular Value to Stop Program
```
 while((scanf("%d",&a[i]))!=EOF)  /// program stops if the input is crtl Z(numeric -1) 
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
         }
      }
/// or

    while((scanf("%d",&a[i]))==1)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
           break;
         }
      }
      
   
    while((scanf("%d",&a[i])) && a[i]!=0) /// program stops if the input is 0(zero)
      {
         i++;
         if(i>=max_size)
         {
           printf("!!Array Overflow!!\n\n");
           break;
         }
         }
```   
