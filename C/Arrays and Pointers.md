# Arrays
An array is a collection of data items of the same data type. And it is also konwn as subscript variable.

- items are stored at contiguous memory locations in Arrays.
- It can also store the collection of derived data types such as pointers, structures etc,.

1-D arrays and 2-D arrays can be referred to as Vectors(List) and Matrices(Table) respectively.

Example for 1-D Array

```C
#include<stdio.h>

int main()
{
	//One dimensional array
	int marks[10], sum=0;
	printf("Enter marks of 10 students : \n\n");
	for (int i=0;i<=9,i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i]
	}

	int average = sum/10;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;
}
```

Example for 2-D Array
```C
#include<stdio.h>

int main()
{

	//Two dimensional array
	int Matrice[3][3]; 
	printf("This Program will print no. from 1-9 in matrice form : \n\n");
	for (int i=0;i<3,i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("Enter no. (1-9) : ");
			scanf("%d", &Matrice[i][j]);
		}
	}
	printf("\n\n\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d\t", Matrice[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n So that's the matrice form of no from 1-9");
	return 0;
}
```

# Pointers
- Pointer is a variable that contains addresses of another variable. It means it is a variable but this variable contains address or memory address of any other variable.
- It can be of type int, char, array, function, or any other pointer.
- Pointers in C language can be declared using *(asterisk symbol).

```C
#include<stdio.h>

int main()
{
	int x=5;
	int *a =&x;

	printf("%d\n",&x );
	printf("%d",a );
	return 0;
}
```

## Address of Operator (&):
- It is a unary operator
- Operand must be the name of the variable
- & operators gives address no. of variable and is also known as "Referncing Operator"

## Indirection Operator:
- '*' is indirection operator
- It is also known as "Dereferencing Operator" and takes address as an arguement as well as return the content/container whose address is it's arguement.

## Null Pointer
- A pointer that is not assigned any value butt NULL is known as NULL pointer
- `int *ptr = NULL;`

## Uses of Pointers
- Dynamic Memory Allocation
- Return multiple values from a function
- Reduces the code and improves performance.

## Arithmetic in Pointers
- Arithmetic Operators that can be used on pointers are: ++, --,  +, -
- Adding an integer to a pointer will return the (address of the pointer + sizeof(datatype)Xinteger)
- Suppose address of A[0] is 1000, then the address of next variable in Array will be 1004(if int)
- Pointer when incremented always point to next block of its own type.

- An array by default is a pointer itself that returns the address of it's first element(0th index)

## Passing Arrays as Function Argument

Declaration of a function with formal parameters
`void myfunc (int arr[]){}`
`void myfunc (int arr [3][3]){}`
`void myfunc (int *ptr){}`

- When we make a change in array using pointers in the functions, the actual array will also be affected.

# Strings
A string is a one-dimensional array of characters that is terminate by a null character (\'0')

## Declaration of strings
`char string_name[size];`
`char name[] = {'S', 'T', 'R', 'I', 'N', 'G'};`
`gets(str)`
`printf("%s", str)`
`puts(str)`

- In order to take input a string that contains the spaces, we use the gets() function. The purpose it to ignore the whitespaces.


```C
#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[34];
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}

```

## String Library(string.h)

- strcat(t,s)
This function is used to concatenate the source string at the end of the target

- strcpy(t,s)
This function is used to copy the contents of one string to another. The base address of the source and target strings should be given to this function.

- strlen(str)
This function is used to count the number of characters present in a string.

- strcmp()
This function is used to compare two strings to find out whether the are same or different. 

- strrev()
This function is used to show the reverse of the string.

## Void Pointer
Void Pointer has no reutrn type i.e., functions that are not returning anything are given the type void. So, in case of void pointers, they can be typecast into any data type whenever we want.
Syntax
```C
int x = 1;
void *ptr = &x;
```

- C does not allow void pointers to be dereferenced.
- We cannot use pointer arithmetic with void pointers.

## Null Pointer
A NULL pointer is a pointer taht does not point to any memory location. It generally points to NULL or 0th memory location.

Deferencing is same as in the case of null pointer wrt void pointer.
Uninitialized pointer points to a garbage value by default where as null pointer points to the 0th address.

`int *ptr = NULL;`
`void *ptr;`

Null Pointer is a value where as Void Pointer is a type.

## Dangling Pointer
Dangling pointers are pointers that are pointing to a memory location that has been freed or deleted.
Examples- Deallocating or free variable memory, function call.

## Wild Pointer
Uninitialized pointers are known as wild pointers(void).

For ex:
`int *ptr`
Here, we created a pointer but didn't give it any value, so it becomes a wild pointer.
To avoid the bugs and errors it can cause in a program; we prefer to convert a void pointer to a NULL pointer.

## Function Pointer
In function pointers, the function name can be used to get the function address.
`function_return_type(*Name_of_pointer)(function arguments list);`
eg: `void (*func)(int, char);`

Some important points regarding function pointer:
- We can declare a function pionter and assign a function to it in a single statement like this:
`void (*function_ptr)(int) = &fun;`
- We can remove the & from this statement because a function name alone represents the function address.
`void (*function_ptr) (int) = fun;`

## Callback Function
If a function's reference is passed to another function as an argument to call it, it will be called a Callback function.
`void fileDownload (const char *file, void (*callback_function)(int statusCode));`