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
