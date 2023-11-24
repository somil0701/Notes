# Pre-Processor
The C Pre-Processor is not a part of the compiler. It instructs the compiler to do required pre-processing before the actual compilation process.

Some important Pre-Processor directives are as follows:

#include

This directive will insert a particular header from another file.

#define

This will substitute a pre-processor macro.

#undef

Using #undef, we can undefine a pre-processor macro.

#ifdef

It will return true if this macro is defined.

#if

It will test if a compile time condition is true.

#elif

Using #elif, we can define #else and #if in one statement

#endif

It will end pre-processor conditional

#error

Using #error, we can print the error message on stderr.

#pragma

It will issue the special commands to the compiler, using a standardized method.

## Pre-Processor Examples
`#define ARRAY_LENGTH 46`
`#include <stdio.h>`
`#undef FSIZE`
`define FSIZE 30`

## #include
The #include directive causes the pre-processor to fetch the contents of another file into the source code. It will add the content at the point where the #include directive is found.

A header file is a file which contains the extension ".h".
Header files are of 2 types: 
- files that the programmer writes
- files that come with the compiler.

` #include <header file> `
` #include "header file." `

## #define
The #define pre-processor directive is used to define pre-processor variable, consant or macro. Macro operate much like functions. This pre-processor directive can be used to replace a word with a number globally.

`#define constant_name value`
OR
`#define constant_name (expression)`

For ex:
```C
#define Max_length 10
#define Area_OF_Circle(r) (3.1415*(r)*(r))
```
## #undef
It is used to undefine a macro to eliminate it's definition
```C
#define E 111
#undef E
```

## #ifdef
It is used to check wheter a macro is defined or not. If it is defined, then it executes the code.
```C
#ifdef M
//execute the code if true i.e., the macro is defined
```

## #ifndef
It works exactly the opposite of ifdef. Meaning that it executes teh code if the macro is undefined.

## #if
It checks whether the given condition is true or not. If true, then it executes the code.
```C
#if condition
// execute code if true i.e. condition satisfied
```

## #else
If the condition of 'if' is false, then the else is executed.
```C
#if condition
// execute code if true else pass it to #else

#else
// execute code if "if condition" is false
```

## #elif
It is used to insert more conditions between if and else. If the 'if statement" is true, then elif won't be checked.

## #pragma
Pragma is used to issue some special aommands to compiler.

## Pre-Defined Macros
A pre-defined macro is a macro that has already been defined or understood by C preprocessor and does not need a definition.

- __DATE__:
It prints the current date on the screen. The date format it follows is MMDDYYYY.
Syntax:
`printf(__DATE__);`

- __TIME__;
It prints the current time on the screen. THe time format it follows is HH:MM:SS.

- __FILE__
It prints the current file name on to the screen. The name will be printed as a string literal.

- __LINE__
It prints the current line no. on to the screen. The no. will be printed as a decimal constant.

- __STDC__
It is used to check whether our program is being compiled using ANSI standard or not. It will return 1 if true.
