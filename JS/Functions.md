# Functions
Reusable procedures
- Functions allow us to write reusable, modular codeto write reusable, modular codeto write reusable, modular code
- We define a "chunk" of code that we can then execute at a later point.
- We use them ALL THE TIME.

## Define
```js
function funcName(){
    // do something
}
```

```js
function grumpus(){
    console.log('helo');
    console.log('world');
}
```

## Run
```js
funcName(); // run once
funcName(); // run again!
```

```js
grumpus();
/* helo
world */
grumpus();
/* helo
world */
```

## Arguments
We can also write functions that accept inputs, called arguments.

```js
"hello".toUpperCase();  // No Arguments
"hello".indexOf('h');   // 0
```

```js
function greet(person){
    console.log(`Hi, ${person}!`);
}
```

## Return
Built-in methods return values when we call them. We can store those values:

```js
const yell = "I will end you".toUpperCase();

yell; // I WILL END YOU
```

```js
function add(x, y){
    return x + y;
}

const sum = add(10, 16);
sum;    // 26
```

The return statement ends function execution AND specifes the value to be returned by that function.

## Scope
The location where a variable is defined dictates where we have access to that variable.

## Higher Order Functions
Functions that operate on/with other functions. 
They can:
- Accept other functions as arguments
- Return a function

## Methods
We can add functions as properties on objects. We call them methods.

## 'THIS' keyword
```js
const person = {
    first: 'robert',
    last: 'herjavec',
    fullName(){
        return `${this.first} ${this.last}`
    }
}
person.fullName();  // robert herjavec
person.last = 'plant';
person.fullName();  // robert plant
```

The value of `this` depends on the invocation context of the function it is used in.
