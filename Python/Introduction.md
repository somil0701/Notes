# Introduction to Python
## Output in Python
```py
print("Hello World!")
```
`Hello World!`

- `print` is called a built-in function in Python. A function is an object that accepts inputs and returns outputs.

- The object inside the parenthesis of the print function is called a string.

- A string is a sequence of characters enclosed in quotes(single or double).

- Printing numbers:
```py
>>> print(1)
1
>>> print(2.0)
2.0
```
- Multiple items can be printed on the same line in the following way:
```py
>>> print(1,2)
1 2
>>> print('degree', 'program')
degree program
```
- If the `print` command is called without passing any input to it, then it prints a blank line:
```py
>>> print()

```
- Printing Emojis:
```py
>>> print('\N{emoji_name})
{emoji_will_be_displayed_here}
```
## Literals and Variables

- Strings like 'Hello-World' and numbers like '1', '2.0' are called literals in python. Formally, a literal is something that describes a constant value.

- Variables are containers that are used to store values.
```py
>>> x = 1
>>> print(x)
1
>>> y = "a string"
>>> print(y)
a string
>>> foo_var = 123.456
>>> print(foo_var)
123.456
```

- '=' is called the assignment operator. Whenever the assignment operator is present in a staement, it is used for the following purpose
    - define a new variable
    - update an existing variable

```py
>>> x = 1 # define a new variable
>>> x = x + 1 # update an existing variable
>>> print(x)
2
```

- Note: The assignment operator is evaluated from right to left. That is, the expression to the right of the assignment operator is evaluated first. This result is then assigned to the variable on the left.

## Basic Data Types | type()

- Basic Data Types in Python can be classified as follows:
    - Integers
    - Float
    - String
    - Boolean

- Integer
The `int` type represents integers. Python provides a command called `type` to determine the type of an object:
```py
>>> print(1)
1
>>> type(1)
<class 'int'>
```

- Float
The 'float' type represents real numbers:
```py
>>> print(1.0)
1.0
>>> type(1.0)
<class 'float'>
```

The following is also a valid float literal:
```py
>>> print(1.)
1.0
```

- String
The `str` type represents strings:
```py
>>> print('one')
one
>>> type("one")
<class 'str'>
```

- Boolean
The `bool` type represents boolean values:
```py
>>> print(True)
True
>>> type(False)
<class 'bool'>
```

Note: `bool` values are case sensitive. That is, `true` and `false` are not `bool` values.

## Comments
A comment is a line of text that is not executed by the interpreter. Comments begin with the `#` symbol. The following are comments:
```py
>>> # This is a comment
>>> # print(1)
>>>
```
As line-2 is a comment, `1` is not printed in the next line.

## Operators

### Arithmetic
The following table gives the symbols for arithmetic oeprators and the operations that they correspond to:
| Operator | Operations     |
| -------- | -------------- |
| +        | Addition       |
| -        | Subtraction    |
| *        | Multiplication |
| /        | Division       |
| //       | Floor Division |
| %        | Modulus        |
| **       | Exponential    |

- `//` is called the floor division operators. `x//y` gives the quotient when `x` is divided by `y`. For example, `8//3` is `2`.
- `%` is called the modulus operator. `x % y` gives the remainder when `x` is divided by `y`. For example, `10 % 3` is `1`.
- `**` is called the exponential operator. `x**y` returns x^y.
- `/` and `//` are two different oeprators. `/` gives the complete result of the division, while `//` returns the quotient.

### Relational
|Operator | Operation                |
|-------- |--------------------------|
|>	      | greater than             |
|<	      | less than                |
|>=	      | greater than or equal to |
|<=       | less than or equal to    |
|==	      | double equal to          |
|!=	      | not equal to             |

- Relational Operators are also called comparison operators. The result of any comparison operation is a boolean value: `True` or `False`. It can also be assigned to a variable.
```py
>>> x = 10
>>> y = 15
>>> z = y > x
>>> print(z)
True
```
- `==` symbol corresponds to equality operator where as `=` refers to the assignment operator.

### Logical
| Operator | Opeation            |
|----------|---------------------|
| not      | negation            |
| and      | logical conjunction |
| or       | logical disjunction |

- `and` and `or` are binary operators; not is a unary operator.

## Expressions

### Arithmetic Expression
```py
>>> 1 + 2
3
>>> type(1 + 2)
<class 'int'>
>>> 1.0 + 2
3.0
>>> type(1.0 + 2)
<class 'float'>
```

- We see that the result is 3.0 which is of type `float`. So, `float` is more dominant than `int` as far as the addition operation is concerned. All the operations result in a `float` irrespective of the operator involved.

### Precedence

- The precedence rules for operators can given as per the following table. Those with higher precedence come at the top of the table. Operators in a given cell have the same precedence. For example, `+` and `-`

| Operators       | Operation                                        |
|-----------------|----------------------------------------------------|
| \* *             | exponentiation                                    |
| +X, -X          | unary +, unary -                                  |
|                 | (positive sign), (negative sign)                  |
| *, /, //, %     | multiplication, division, floor division, modulus |
| +, -             | addition, subtraction                             |

**The precedence goes from high to low**

```py
>>> 4 // 2 - 1
1
```

### Order
Python evaluates expressions from **left** to **right**. There are two exceptions to this rule, the `**` and `=` operator, both of which are evaluated from right to left.

```py
>>> 8 % 4 % 2
0
>>> 2 ** 3
```

### Boolean Expression
Expressions that involve a relational operator will result in a `bool`.
```py
>>> 2 > 1
True
>>> type(2 > 1)
<class 'bool'>
```

### Precedence and Order
Similar to arithmetic operators, logical operators also have precedence. Boolean operators are also going to evaluated from left to right:

| Operators |
|-----------|
| not       |
| and       |
| or        |

**The precedence goes from high to low**

```py
>>> not True and False
False
```

## Beaware of Float
```py
>>> 10.000000000000000000001 > 10
False
```
- The reason this returns `False` in Python has to do with the way floating point numbers are represented. Python does not support arbitrary precision for represeting real numbers. When the number cannot be represented exactly, an approximate value is returned.

```py
>>> 0.1 * 3
0.30000000000000004
```

- The problem is with the way `0.1` is represented in binary - it has a non-terminating, recurring sequence of bits after the decimal point. As the computer uses a finite no. of bits to represent data, this sequence will be truncated at some stage. This results in an approximate representation of `0.1`. For a more detailed explanation, refer to <ins>[THIS](https://www.exploringbinary.com/why-0-point-1-does-not-exist-in-floating-point/#:~:text=For%20example%2C%20in%20half%2Dprecision,which%20is%200.0999755859375%20in%20decimal.)

## Short Circuit Evaluation
```py
>>> True or (1/0)
True
```
The expression is evaluated from left to right. The operator is `or`. Since the operand on the left is `True`, the whole expression will evaluate to `True` irrespective of the operand on the right. So, the interpreter skips evaluating the operand on the right. This behaviour is called short circuit evaluation.

- Example:
    ```py
    >>> (not((3 > 2) or (5 / 0))) and (10 / 0)
    False
    ```

## Errors and Exceptions

### Errors
```py
print('123)
```

Output:
```
  File "main.py", line 1
    print('123)
              ^
SyntaxError: EOL while scanning string literal
```

- The above lines represent an error message. It is the interpreter's way of warning us that there is something wrong with the code. In this case, we have a `SyntaxError`, i.e., something is wrong with the syntax.

### Exceptions
```py
1/0
```

Output:
```
Traceback (most recent call last):
  File "main.py", line 1, in <module>
    1 / 0
ZeroDivisionError: division by zero
```

We are trying to divide by zero and the interpreter is rightly objecting to it. This is called a `Zero Division Error`.

- Such Errors that are detected by the interpreter during the program's execution are called exceptions.

```py
1 + 'one'
```

Output:
```
Traceback (most recent call last):
  File "main.py", line 1, in <module>
    1 + 'one'
TypeError: unsupported operand type(s) for +: 'int' and 'str'
```
The interpreter throws a `TypeError`. The msg accompanying the error is more suggestive: an int and string can't be added.

```py
print('There is no problem with this line')
print(x ** 2)
```

Output:
```
There is no problem with this line
Traceback (most recent call last):
  File "main.py", line 2, in <module>
    print(x ** 2)
NameError: name 'x' is not defined
```

It is the second line which has a problem. `NameError` occurs when we try to reference a variable that has not been defined before.

## Strings

### Quotes: single, double and triple
A string is any sequence of characters enclosed within single or double quotes.

Example of a Multi-Line String:
```py
x = '''first line
second line
third line'''
print(x)
```

### Length
The length of a string is the number of characters in it. Python provides a built-in function called `len` to find the length of a string:
```py
x = 'good'
print(len(x))
```

- Note: Python doesn't have a separate data type for characters. A character in Python is represented by a string of length 1.

We can also define empty strings in python:
```py
x = ''
print(len(x))
```
The length of the empty string is 0.

### Operations on Strings
#### Concatenation
We can concatenate two strings using `+` operator. Concatenation is just a fancy term for joining two strings together:
```py
string1 = 'first'
string2 = ','
string3 = 'second'
string4 = string1 + string2 + string3
print(string4)
```
Output: 
```py
first,second
```

#### Replication
We can make multiple copies of a string and string them all together using the `*` operator:
```py
s = 'good'
five_s = s * 5
print(five_s)
```
Output: 
```py
goodgoodgoodgoodgood
```

#### Comparison
We can compare two strings with `==` operator.
```py
x = 'python'
print(x == 'python', x == 'nohtyp')
```

Output:
```py
True False
```

- Two strings are equal if and only if both of them represent exactly the same sequence of characters.

```py
print('good' > 'bad')
print('nine' < 'one')
print('a' < 'ab' < 'abc' < 'b') # Very Important
```

Output:
```py
True
True
True
```

- Note: It is clear from the above examples that the length of the string is not a metric used by Python to compare strings. Instead, Python uses the familiar alphabetical ordering to compare two strings(lexicographic ordering).

- Lexicrographical ordering for string uses the Unicode code point number to order individula characters.

- Python provides a built-in function called `ord` that returns the code point of any given character. For eg:

```py
print(ord('a'), ord('b'))
print(ord('a'), ord('A'))
```

Output:
```py
97 98
97 65
```

### Escape characters
In python, the backslash - `\` - is called the escape character. One of its uses is to represent certain white-space characters such as tabs and new lines.

- `\n` is a new line character. Its effect is to introduce a new line.
Note: \n is still regarded as a single character

```py
x = print('This is the first sentence.\nThis is the second sentence.')
```
Output:
```py
This is the first sentence.
This is the second sentence.
```

- `\t` is used for giving indent of a block.
- `\'` is used for escaping quotes.

### Substrings
A string is a substring of another string if the first string is contained in the second. For eg: `'good'` is a substring of `'very good'`.

- Python provides a keyword - `in` - which can be used to check if a given string is a substring of another string.

```py
a = 'good'
b = 'very good'
present = a in b
print(present)
not_present = b in a
print(not_present)
```

Output:
```py
True
False
```

- `in` is a powerful keyword. It can also be usd along with `not` in the follwing manner:
```py
a = 'abc'
b = 'ab'
print(a not in b)
```

Output:
```py
True
```