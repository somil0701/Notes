# Introduction
## Statements and the structure of a program

### Statements
A statement is a type of instruction that causes the program to perform some action.

### Functions and the main function
A function is a collection of statements that get executed sequentially(in order, from top to bottom).

Every C++ Program must have a special function named <b>main</b>.

In programming, the name of a function (or object, type, etc) is called its <em>identifier</em>.

### Dissecting Hello World
`iostream` library is a part of the C++ standard library that allows us to read and write text from/to the console. We need this in order to use `std::cout`.

When an executable program finishes running, the program sends a value back to the operating system in order to indicate whether it ran successfully or not. This particular statement reutnrs the value `0` which means "successful execution".

### Syntax Error
A syntax error is a compiler error that occurs at compile-time when your program violates the grammer rules of the C++ language.

## Comments
A <em>comment</em> is a programmer-readable note that is inserted direcly into the source code of the program. Comments are ignored by the compiler.

### Single-line comments
The `//` symbol begins a C++ single-line comment.
```cpp
std::cout << "Hello world"; // Comment
```

### Multi-line comments
The `/*` and `*/` pair of symbols denotes a C-style multi-line comment. Everyhing in between the symbols is ignored.

```cpp
/* This is a multi-line comment.
   This line will be ignored. */
```

## Objects and Variables

An <em>object</em> is a region of storage (usually memory) that can store a value, and has other associated properties.

We name our objects using an identifier. An object with a name is called a <b>variable</b>.

Identifier is the name that a variable is accessed by.

### Variable Instantiation
In order to create a variable, we use a special kind of declaration statement, called a <b>definition</b>

```cpp
int x; // define a variable named x, of type int
```

Instantiation means that the object will be created and assigned a memory address.

### Defining multiple variables
```cpp
int a, b;
int x;
double y;
```

Avoid defining multiple variables of the same type in a single statement. Instead, define each variable in a separate statement on it's own line.

## Variable assignment and Initialization

### Variable assignment
After a variable has been defined, you can give it a value (in a separate statement) using the = operator. This process is called <b>assignment</b>, and the '=' operator is called the <b>assignment operator</b>.

It copies the value on the RHS of the '=' to the variable on the LHS. This is called the <b>copy assignment</b>.

### Initialization
When a variable is defined, you can also provide an initial value for the variable at the same time. This process is called <b>initialization</b>.

There are 6 basic ways to initialize variables in C++:
```cpp
int a;   // default initialization
int b = 5;  // copy initialization
int c(6);   // direct initialization

// List initialization methods (C++11) (preferred)
int d {7};  // direct list initialization
int e = {8};   // copy list initialization
int f{}; // value initialization
```

### Default Initialization
When no initializer is provided, this is called <b>default initialization</b>. In most cases it performs no  intitalization, and leaves a variable with an indeterminable value.

### Copy Initialization
When an initial value is provided after an equals sign, this is called <b>copy intialization</b>.

### Direct Initialization
When an initial value is provided inside paranthesis, this is called <b>direct intialization</b>.

### List Initialization
The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces.This is called <b>list initialization</b>.

It has an added benefit: "narrowing conversions:, that is throw an error while implicit typecasting.

### Value Initialization and zero initialization
Value initialization will initialize the variable to zero (or empty, if that's more appropriate for a given type), in such cases where zeroing occurs, this is called <b>zero initialization</b>.

### The [[maybe_unused]] attribute
C++ 17 introduced the `[[maybe_unused]]` attribute, which allows us to tell compiler that we're okay with a variable being unused. The compiler will not generate unused variable warning for such variables.

```cpp
int main()
{
    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    // the above variables will not generate unused variable warnings

    return 0;
}
```

## Introduction to iostream: cout, cin and endl

### The input/output library
The io part of iostream stands for input/output.

### std::cout
It allows us to send data the the console to be printed as text. cout stands for "character output".

Inside our main function, we use std::cout along with the <b>insertion operator (`<<`)</b>, to send the text to the console.

### std::endl
std::endl prints a newline character to the console(causing the cursor to go to the start of the next line). In this context, endl stands for "end line".

### std::endl vs '\n'
Using std::endl can be a bit inefficient, as it actually does two jobs: it moves the cursor the the next line of the console, and it flushes the buffer.
Because of this, use of the '\n' character is typically preferred instead.

### std::cin
`std::cin` reads input from keyboard using the <b>extraction operator (`>>`)</b>. The input must be stored in a variable to be used.

## Keywords and naming identifiers
### Keywords
C++ reserves a set of 92 words for its own use. These words are called <b>keywords</b> and each of the keywords has a special meaning within the C++ Language.

### Identifier naming rules
- The identifier can not be a keyword. Keywords are reserved.
- The identifier can onlly be composed of letters, numbers, and the userscore character(no whitespaces and symbols).
- The identifier must begin with a letter or an underscore. It can not start with a number.
- C++ is case sensitive.

### Identifier naming best practicies
```cpp
int value;  // conventional

int Value;  // no
int VALUE;  // no
int VaLuE;  // no
```

For Multi-Words:
```cpp
int my_variable_name;   // conventional
int my_function_name(); // conventional

int myVariableName;   // conventional
int myFunctionName(); // conventional
```

## Whitespace and basic formatting
### Whitespace
<b>Whitespace</b> is a term that refers to characters that are used for formatting purposes. In C++, this refers primarily to spaces, tabs, and new lines.

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello World" << endl;

    return 0;
}
```

### Basic Formatting
```cpp
cost          = 57;
pricePerItem  = 24;
value         = 5;
numberOfItems = 17;

int main()
{
    std::cout << "This is a really, really, really, really, really, really, really, "
        "really long line\n"; // one extra indentation for continuation line

    std::cout << "This is another really, really, really, really, really, really, really, "
                 "really long line\n"; // text aligned with the previous line for continuation line

    std::cout << "This one is short\n";
}
```

## Introduction to literals and operators
### Literals
A <b>literal</b>(also known as a <b>literal constant</b>) is a fixed value that has been inserted directly into the source code.

### Operators
An <b>operation</b> is a process involving zero or more input values(called <b>operands</b>) that produces a new value (called an output value). The specific operation to be performed is denoted by a symbol called an <b>operator</b>.

Types of Operators:
- Unary (single operands)
- Binary (two operands)
- Ternary (uses 3 operands {conditional})
- Nullary (acts on zero operands)

### Return values and side effects
An operator(or function) that has some observable effect beyond producing a reutrn value is said to have a <b>side effect.</b>

Both `=` and `<<` (when used to output values to the console) return their left operand.

## Introduction to expressions
### Expressions
An <b>expressions</b> is a sequence of literals, variables, operators, and function calls that calculates a single value. The process of executing an epxression is called <b>evaluation</b>, and the single value produced is called the <b>result</b> of the epxressions.

Examples,
```cpp
2               // 2 is a literal that evaluates to value 2
"Hello world!"  // "Hello world!" is a literal that evaluates to text "Hello world!"
x               // x is a variable that evaluates to the value of x
2 + 3           // operator+ uses operands 2 and 3 to evaluate to value 5
five()          // evaluates to the return value of function five()
```

`type identifier { expression };`

### Expressions statements
An <b>expression statement</b> is a statement that consists of an expression followed by a semicolon.