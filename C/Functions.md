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