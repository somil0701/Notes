# Loops
- Loops allow us to repeat code
    - Print 'hello' 10 times
    - Sum all numbers in an array
- There are multiple types:
    - for loop
    - while loop
    - for ..of loop
    - for ..in loop

## For Loops
### For Loop Syntax
```js
for ([initalExpression]; [condition]; [incrementExpression])
```

```js
for (let i = 1; i <= 10; i++){
    console.log(i);
}
```

### Looping Over Arrays
To loop over an array, start at index 0 and continue looping to until last index(length - 1).
```js
const animals = ['lions', 'tigers', 'bears'];

for (let i = 0; i < animals.length; i++){
    console.log(i, animals[i]);
}
```

## Nested Loops
```js
let str = 'LOL';
for (let i = 0; i <= 4; i++){
    console.log("Outer", i);
    for (let j = 0; j < str.length; j++){
        console.log("Inner: ", str[j]);
    }
}
```

## While Loops
While loops continue running as long as the test condition is true.

```js
let num = 0;
while (num < 10){
    console.log(num);
    num++;
}
```

## A Common Pattern
```js
let targetNum = Math.floor(Math.random() * 10);
let guess = Math.floor(Math.random() * 10);

while (guess !== targetNum){
    console.log(`Guessed ${guess}..Incorrect!`);
    guess = Math.floor(Math.random() * 10);
}
console.log(`Correct! Guessed: ${guess} & target was ${targetNum}`);
```

### The Break Keyword
```js
let targetNum = Math.floor(Math.random() * 10);
let guess = Math.floor(Math.random() * 10);

while (true){
    if (guess === targetNum){
        console.log(`Correct! Guessed: ${guess} & target was ${targetNum}`);
        break;
    }
    else{
        console.log(`Guessed ${guess}..Incorrect!`);

    }
}
```

## For..Of
A nice and easy way of iterating over arrays.
Syntax:

```js
for (variable of iterable){
    statement
}
```

```js
let subreddits = ['soccer', 'popheads', 'cringe', 'books'];
for (let sub of subreddits){
    // Do this for every item in subreddits array:
    console.log(`${sub} - www.reddit.com/r/${sub}`);
}
```
