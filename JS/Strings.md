# Strings

Strings are another primitve type in JavaScript. They represent text, and must be wrapped in quotes.

```js
let firstName = "Ziggy";
let animal = 'Dumbo Octopus';
```

- Strings are Indexed: Each character has a corresponding index (a positional number)

## String Methods

Methods are built-in actions we can perfom with individual strings.

They help us to do things like:

- Searching within a string
- Replacing part of a string
- Changing the casing of a string

Syntax: `thing.method()`

### Casing

```js
let msg = "I am king"a
let yellmsg = msg.toUpperCase();
```

### Trim

```js
let greeting = '    leave me alone plz      '
greeting.trim();
```

Some methods accept *arguements* that modify their behavior. Think of them as inputs that we can pass in.

### indexOf

```js
let tvShow = 'catdog';

tvShow.indexOf('cat'); // 0
tvShow.indexOf('dog'); // 3
tvShow.indexOf('z'); // -1 (not found)
```

### slice

```js
let str = 'supercalifragilisticexcepialidocious'
str.slice(0,5); // super
str.slice(5); // caligragilisticexpialdocious
```

### replace

```js
let annoyingLaugh = 'teehee so funny! teehee!';
annoyingLaugh.replace('teehee', 'haha') // 'haha so funny! teehee!
// Notice that it only replaces the first instance
```

## String Escapes

- \n - newline
- \' - single quotes
- \" - double quotes
- \\ - backslash

## Template Literals

Template literals are strings that allow embedded expressions, which will be evaluated and then turned into a resulting string.

```js
`I counted ${3+4} sheep`; // I counted 7 sheep
```

Note: We use back-ticks not single quotes in a template literal

## NULL and Undefined

- Null
  - Intentional absence of any value
  - Must be assigned

- Undefined
  - Variables that do not have any assigned value are undefined.

### NULL

```js
let loggedInUser = null; // value is explicity nothing
loggedInUser = 'Alan Rickman';
```

### Undefined

```js
let pickles;
pickles; // undefined

let food = 'tacos';
food[7]; // undefined
```

## Math Object

Contains properties and methods for mathematical constatns and functions

```js
Math.PI // 3.14........
Math.round(4.9)  // 5
Math.abs(-456)  // 456
Math.pow(2,5)   // 32
Math.floor(3.999)   // 3
```

### Random Numbers

Math.random() gives us a random decimal between 0 and 1 (non-inclusive)

```js
Math.random();
// 0.1450234563636
```

### Random Integers

Let's generate random numbers between 1 and 10

```js
const step1 = Math.random();
// 0.5990273597925
const step2 = step1 * 10
// 5.990273597925
const step3 = Math.floor(step2);
// 5
const step4 = step3 + 1;
// 6

Math.floor(Math.random() * 10) + 1;
```
