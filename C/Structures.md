# Structures in C
Structures are usually used when we want to store dissimilar data together.

## How to access the structures elements? 
In the case of structures to access any element, we use the operator(.). This dot operators is coded between the structure variable name and the structure member that we wish to access.

Example:
```C
#include <stdio.h>
struct book {
char title[20];  
char Author_name[100];  
float price;  
int pages;
} ;
int main( ) {
struct book book1 = { "Cprogramming", "ABC", 130.00, 550 } ;
printf ( "\n Title = %s", book1.title ) ;
printf ( "\n Name = %s", book1.Author_name ) ;
printf ( "\n Price = %.2f",book1.price ) ; 
printf ( "\n Pages = %d", book1.pages ) ;
return 0;}
```

## Additional Features of Structures
- We can assign the values of a structure variable to another structure variable of the same type.
- Structures can be nested within another strucutre.
- We can pass the structure variable to a function.(individual elements or entire structure variable)
- We can have a pointer pointing to a strucut just like the way we can have a pointer pointing to an int or char.
- Generally used to store a large amount of data.

## Typedef
A typedef is a keyword that is used to assign alternative names to existing datatypes.

Following is the syntax for using typedef,
`typedef <previous_name> <alias_name>`

- Increases readibiliy of the code
- Can be used with an multi-dimensional array or structures for portability.