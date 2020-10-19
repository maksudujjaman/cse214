# Array Declaration

```c
int a[10]; /* "a" is integer data type array and 10 is the maximum number of value/element/items can be stored in "a" array. */
double a[10]; /* "a" is double data type array and 10 is the maximum number that can be stored in "a" array. */
float a[10];/* "a" is double data type array and 10 is the maximum number that can be stored in "a" array. */
char a[10];/* "a" is character data type array and 10 is the maximum number of characters can be stored in "a" array. */
int a[]; /* Invalid Decleration. */
```
# Different Types of Variable  Decleration 
```c
int N ; /// variable declaration--int data type
int size = 10 ; /// variable declaration & initialization--int data type
float N ; /// variable declaration--float data type
double N ;/// variable declaration--double data type
char N ;/// variable declaration--char data type
```
# Array Initialization

```c
int a[10] = {2,4,6,8,10,12}; /* maximum 10 value/element/items can be stored in the array. 6 elements are currently stored in "a" array so size of the array is 6*/ 
```
# Array Insertion (User Input) 
```c
for(i = 0; i<size; i++) 
{
 scanf("%d",&a[i]); 
}
```
# Array Access (Intialized Element) 
```c
int a[10] = {2,4,6,8,10,12};
for(i = 0; i<size; i++) 
{
 printf("%d",&a[i]); 
}
```
# Array Access (User Input) 
```c
int a[10] = {2,4,6,8,10,12};
for(i = 0; i<size; i++) 
{
 printf("%d",&a[i]); 
}
```
# Printing an Array (Using Loop) 
```c
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
```c
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
