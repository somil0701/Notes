# Basics of C


Pre-Processor commands

```c
#include<stdio.h>
```

Header Files

```c
main()
```

### Keywords

Keywords are reserved words that can not be used elsewhere in the program for naming a variable or a function.

### Identifiers

Identifiers are names given to variables to differentiate them from one to another.

### Constants

Constants are very similar to a variable and they can also be of any data type. They only difference b/w a constant and a varialbe is taht a constant's value never changes.

### Comments

- Single Line Comments start with two forward slashes(//)
- Multi-line comment starts with /* and ends with */

```c
#include<stdio.h>

int main(){
    //This is a single line comment
    /*
    This is a multi
     line comment
    /*

}

```

### Declaration of a Variable

```c
data_type variable_name

```

### Rules for Naming a Variable

- A variable name can only contain alphabets, digits, and underscores(_)
- A variable can't start with a digit.
- A variable cannot include any white space.
- The name should not be a reserved keyword or any special character.

| Data Types | Size | Format Specifier |
| --- | --- | --- |
| int | 2 or 4 bytes  | %d or %i |
| float  | 4 bytes | %f |
| double | 8 bytes | %lf |
| char | 1 byte | %c |

```c
int integer = 26;
float floating = 39.32
char character = 'A'

printf("%d\n", integer);
printf("%f\n", floating);
printf("%c\n", character);
```

### C Constants

```c
const int MOD = 1005;
```

### C Operators

Special symbols that are used to perform actions or operations are knon as operators.

- Arithmatic Operators are used to perform mathematical operations such as addition, subtraction etc.

| Operator | Description |
| --- | --- |
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulus |
- Relational Operators

| Operator | Description |
| --- | --- |
| > | Greater than |
| < | Less than |
| >= | Greater than or equal to |
| <= | Less than or equal to |
| == | Is equal to |
| != | Is not equal to |
- Logical Operators

| Operator | Description |
| --- | --- |
| && | AND Operator |
| || | OR Operator |
| ! | NOT Operator |
- Bitwise Operators

| Operator | Description |
| --- | --- |
| & | Bitwise AND |
| | | Bitwise OR |
| ^ | Bitwise XOR |
| ~ | Bitwise Complement |
| >> | Shift Right Operator |
| << | Shift Left Operator |
- Assignment Operators

| Operator | Description |
| --- | --- |
| = | It assigns the right side operand value to the left side operand. |
| += | It adds the right operand to the left operand and assigns the result to the left operand. |
| -= | It subtracts the right operand from the left operand and assigns the result to the left operand. |
| *= | It multiplies the right operand with the left operand and assigns the result to the left operand. |
| /= | It divides the left operand with the right operand and assigns the result to the left operand. |

### Escape Sequences

| Escape Sequence | Description |
| --- | --- |
| \t | Inserts a tab space |
| \b | Inserts a backspace |
| \n | Inserts a new line |
| \r | Inserts a carriage return |
| \f | Inserts a form feed |
| \’ | Inserts a single quote character |
| \’’ | Inserts a double quote character |
| \\ | Inserts a backslash character |

### User Input/Output

The scanf(() function takes two arguements:

- The format specifier of the variable
- The reference operator(&var)

```c
#include <stdio.h>
 
int main()
{
    int marks;
    char name[30];
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter marks in Maths: ");
    scanf("%d", &marks);
 
    printf("Hello %s! You have scored %d in Maths!", name, marks);
    return 0;
}
```