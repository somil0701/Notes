# Functions and Files
## Introduction to functions

A <b>function</b> is a reusable sequence of statements designed to do a particular job.
The function initiating the function call is the <b>caller</b>, and the function being called is the <b>callee</b> or <b>called</b> function.

```cpp
returnType functionName() // This is the function header (tells the compiler about the existence of the function)
{
    // This is the function body (tells the compiler what the function does)
}
```

The first line is informally called the <b>function header</b>, and it tells the compiler about the existence of a function, the function's name, etc.

the curly braces and statements in-between are called the <b>function body</b>.

## Function return values (value-returning functions)
When you write a user-defined function, you get to determine whether your function will return a value back to the caller or not.

We use a <b>return statement</b> to indicate the specifiic value being returned to the caller.
The specific value returned from a function is called the <b>return value</b>.

```cpp
#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement indicates the specific value that will be returned
    return 5; // return the specific value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}
```

When run, this program prints:
```
5
7
```

Execution starts at the top of `main`.

### Revisiting Main
The return value from `main` is sometimes called a <b>status code</b> (also sometimes called an <b>exit code</b>, or rarely a return code), as it is used to indicate whether the program ran successfully or not.

By definition, a status code of `0` means the program executed successfully.

`Incomplete due to lack of time hence, refer to the short notes given below`
# Short Notes for Function and Files
- Practice <b>DRY</b> programming -- "don't repeat yourself". Make use of variables and functions to remove redundant code.

- Functions with a return type of <b>void</b> do not return to the caller. A function that does not return a value is called a <b>void function</b> or <b>non-value returning function</b>. Void functions can't be called where a value is required.

- A return statement that is not the last statement in a function is called an <b>early return</b>. Such a statement causes the function to return to the caller immediately.

- A <b>function parameter</b> is a variable used in a function where the value is provided by the caller of the function. An <b>arugment</b> is the specific value passed from the caller to the function. When a argument is copied into the parameter, this is called <b>pass by value</b>.

- Function parameters and variables defined inside the function body are called <b>local variables</b>. The time in which variable exists is called its <b>lifetime</b>.
Scope is a <b>compile-time</b> property, meaning it is enforced at compile time.

- A <b>forward declaration</b> allows us to tell the compiler about the existence of an identifier before actually defining the identifer. To write a forward declaration for a function, we use a <b>function prototype</b>,which includes the function's return type, name, and parameters, but no function body, followed by semicolon.

- A <b>definition</b> actually implements or instantiates an identifier. A <b>declaration</b> is a statement that tells the compiler about the existence of the identifier.

- The <b>preprocessor</b> is a process that runs on the code before it is compiled. <b>Directives</b> are special instructions to the preprocessor. Directives start with a `#` syymbol and end with a newline.

- <b>Header files</b> are filed designed to propogate declaration to code files.

- <b>Header guards</b> prevent the contents of a header from being included more than once into a given code file. They do not prevent the contents of a header from being included into multiple code files.
```cpp
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int add(int a, int b){
    return a + b;
}

#endif
```