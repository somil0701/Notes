# JavaScript Basics
## Primitive Types (DataTypes)

The basic building blocks are:
- Number
- String
- Boolean
- Null
- Undefined

(Technically there are two others: Symbol and BigInt)

### Numbers
- JS has one number type
- Positive numbers, negative numbers, whole numbers(integers) and decimal numbers.

### Math Operations
```js
// Addition
50 + 5 //55

// Subtraction
90 - 1 //89

// Multiplication
11111 * 7 // 77777

// Modulo
27 % 2 // 1
```

### NOT A NUMBER(NaN)
NaN is a numeric value that represents something that is... not a number

```js
0/0 // NaN
1 + Nan // Nan
```

### Variables
Variables are like labels for values
- We can store a value and give it a name so that we can refer back to it later, use that value to do some stuff and change it later one.

```js
let someName = value;
let hens = 4;
let roosters = 2;
hens + roosters // returns 6
hens - 1; // returns 3 but does not change the value of hens
hens; // still 4
hens = hens - 1; // this decrements the value of hens
hens; // now the value of hens is 3
```

### Constants
<b>const</b> works just like let, except you CANNOT change the value.

```js
const hens = 4;
hens = 20; // ERROR!

const age = 17;
age = age + 1; // ERROR!
```

Before `let` and `const`, `var` was the only way of declaring variables. These days, there isn't really a reason to use it.

### Booleans
Booleans are very simple. You have two possible options: true or false. That's it!

```js
let isLoggedIn = true;
let gameOver = false;
const isWaterWet = true;
```

Note: Variables can change types
```js
let numPuppies = 23; // Number
numPuppies = false; // Now a Boolean
```

It doesn't really make sense to change from a number to a boolean here, but we can!
