# Functions

Function is nothing but a group of code put together and given a name and it can be called anytime without writing the whole code again and again in a program.

### Advantages of Functions:

- We can avoid rewriting same logic or code thru functions.
- We can divide the work using functions.
- We can easily debug or can find bugs using functions.

### Types of Functions

- Library Functions - These are pre-defined functions in C language. These are the functions which are included in C header files. eg. printf(), scanf(), etc.
- User defined Functions - Functions created by programmer to reduce complexity of a program i.e. these are the functions which are created by user or programmer.

```C
#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for(int i = 0; i < n; i++)
    {
         printf("%c", '*');
    }
}


int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    // c = sum(a, b);
    // printstar(7);
    c = takenumber();
    // printf("The sum is %d \n", c);
    printf("The number entered is %d \n", c);
    return 0;
}


int sum(int a, int b)
{
    return a + b;
}
```

### Recursive Functions

Recursive functions or Recursion is a process when a function calls a copy of itself to work on smaller problems.

Base Case in Recursion:

- The case at which the function doesn’t recur is called the base case.

Recursive Case:

- The instances where the function keeps calling itself to perform a subtask i.e. solving problem by dividing it in small parts, is called the recursive case.
```C
#include<stdio.h>int factorial(int number)
{
	if (number ==1 || number == 0)
	{
		return 1;
	}
	else
	{
		return number*factorial(number-1);	//Recursion of Function
	}
}

int main()
{
	int num;
	printf("Enter a no. :");
	scanf(%d, &num);
	printf("\nThe factorial of %d is %d", num, factorial(num));

	return 0;
}
```

## Types of Paramters
- Formal Parameter: Formal Parameters are the local variable which are assigned values from the arguements when the function is called.
- Actual Parameter: When a function is called, the values that are passed in the call are called arguments or actual parameters.

## Call by Value
In this function call, the changes made to the formal arguments in the called function have no effect on the values of actual arguments in the calling function.
Actual and formal arguments will be created in a different memory location.
```C
void swap(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
void main()
{ 
int r=10, v=20; 
swap(r, v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
} 
```

## Call by Reference
In this method, the addresses of actual arguments in the calling function are copied into formal arguments of the called function. This means that using these addresses we could access the actual arguments and hence be able to manipulate them.
```C
void swap(int *x, int *y)
{
int temp;
 temp=*x;
*x=*y;
*y=temp;
}
void main()
{ 
int r=10, v=20; 
swap(&r, &v);  // passing value to function
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
}
```

## Static Variables
A static variable is known to retain the value even after they exit the scope and are not intialized again in the new scope.
`   static Datatype Variable_name = Variable_value;`

Difference between static local and the static global variable
- Static Global Variable
If we declare the variable with a static keyword outside the function, then it is known as a static global variable. This variable will be accessible throughout the program.

- Static Local variable
The scope of the static local variable will be the same as the local variables, but its memory will be available throughout the execution of the program.