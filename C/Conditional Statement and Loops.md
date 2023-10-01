# Conditional Statement and Loops

```c
switch ( integer expression )
{
case {value 1} :
do this ;

case {value 2} :
 do this ;

case {value 3} :
do this ;

default :
do this ;
 }

```

Copy

### If Else Statements

The condition for the if statement is always enclosed within a pair of parentheses. If the condition is true, then the set of statements following the if statement will execute. And if the condition evaluates to false, then the statement will not execute, instead, the program skips that enclosed part of the code.

| Conditions | Meaning |
| --- | --- |
| a==b | a is equal to b |
| a!=b | a is not equal to b |
| a<b | a is less than b |
| a>b | a is greater than b |
| a<=b | a is less than or equal to b |
| a>=b | a is greater than or equal to b |

```c
if ( condition ){
statements;}
 else {
statements;}
```

### Elif Statements

If we want to check the multiple conditions then ladder if else can used. If the previous condition returns false then only next condition will be checked.

```c
if(/*conditon*/)
{
//statements
}
else if(/*condition*/)
{
statements
}
else if(/*condition*/)
{
statements
```

### Switch Case Statements

Switch executes that block of code, which matches the case value. If the value does not match with any of the cases, then the default block is executed.

```c
switch ( integer expression )
{
case {value 1} :
do this ;

case {value 2} :
 do this ;

case {value 3} :
do this ;

default :
do this ;
 }

```

### **Rules for Switch statements**

- The test expression of Switch must necessarily be an int or char.
- The value of the case should be an integer or character.
- Cases should only be inside the switch statement.
- Using the break keyword in the switch statement is not necessary.
- The case label values inside the switch should be unique.

### While Loop

A while loop allows a piece of code in a program to be executed multiple times, depending upon a given test condition which evaluates to either true or false. The while loop is mostly used in cases where the number of iterations is not known. If the number of iterations is known, then we could also use a for loop.

```c
while (condition test)
{
    // Set of statements
}
```

### Do-While Loop

A do-while loop, unlike what happens in a while loop, executes the statements inside the body of the loop before checking the test condition.

So even if a condition is false in the first place, the do-while loop would have already run once.

```c
do
{
    statements;
} while (test condition);
```

### For Loop

The "For" loop is used to repeat a specific piece of code in a program until a specific condition is satisfied. We use a for loop when we already know the number of iterations of that particular piece of code we wish to execute.

```c
for (initialise counter; test counter; increment / decrement counter)
{
    //set of statements
}
```

### Break and Continue

• Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after that particular loop or switch case it was used in.

- The continue statement is used inside loops in C Language. When a continue statement is encountered inside the loop, the control jumps to the beginning of the loop for the next iteration, skipping the execution of statements inside the body of the loop after the continue statement.

### Go-To Statement

• A goto statement in C programming language provides an unconditional jump from the ‘goto’ to a labeled statement in the same function.

```c
 int num;
    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }

    }
    end:

```

### TypeCasting

****Typecasting is a way to convert one data type into another one. It is also known as data conversion or type conversion. There are 2 types of typecasting****

- Implicit TypeCasting

```c
#include<stdio.h>
int main()
{
	short a=10; //initializing variable of short data type
	int b; //declaring int variable 'b'.
	b=a; //Implicit type casting
	printf("%d\n",a);
	printf("%d\n",b);
}
```

- Explicit Typecasting

```c
printf("B is %d\n", (int) b);
	printf("Type any character : \n");
	scanf(" %c",&c );
	printf("Character is %d",(int) c);
	return 0;
}
```