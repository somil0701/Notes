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

