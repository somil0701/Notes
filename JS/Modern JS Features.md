# Modern JS Features
## Default Params

The Old Way
```js
function multiply(a, b){
    b = type of b!== 'undefined' ? b : 1;
    return a * b;
}

multiply(7);    // 7
multiply(7, 3); // 21
```

The New Way
```js
function mulitply(a, b = 1){
    return a * b;
}

multiply(4);    // 4
multiply(4, 5); // 20
```

## Spread
Spread syntax allows an iterable such as an array to be <b>expanded</b> in places where zero or more arguments (for function calls) or elements (for array literals) are expected, or an ojbect expression to be expanded in places where zero or more key-value pairs (for object literals) are expected.

- For Function Calls
Expands an iterable(array, string, etc.) into a list of arguments

```js
const nums = [9, 2, 3, 8];
Math.max(nums); // Nan
// Use spread;
Math.max(...nums);  // 67
```

- In Array Literals
Create a new array using an existing array. Spreads the elements from one array into a new array.

```js
const nums1 = [1, 2, 3];
const nums2 = [4, 5, 6];

[...nums1, ...nums2];
//[1,2,3,4,5,6]

['a', 'b', ...nums2, 7, 8, 9];
//['a', 'b', 4, 5, 6, 7, 8, 9]
```

- In Object Literals
Copies properties from one object into another object literal.

```js
const feline = {legs: 4, family: 'Felidae'}
const canine = {family: 'Caninae', furry: true};

const dog = { ...canine, isPet: true};
// {family: 'Caninae', furry: true, isPet: true}
```

## The Arguments Object
- Available inside very function
- It's an array-like object
    - Has a length property
    - Does not have array methods like push/pop
- Contains all the arguments passed to the function
- Not available inside of arrow functions!

```js
function sumAll(){
    let total = 0;
    for (let i = 0; i < arguments.length; i++){
        total += arguments[i];
    }
    return total;
}
sumAll(2, 3);   // 5
```

## Rest Params
Collects all remaining arguments into an actual array

```js
function sumAll(...nums){
    let total = 0;
    for (let n of nums) total+= n;
    return total;
}

sumAll(1, 2, 3, 4, 5);  // 15
```

## Destructuring
A short, clean syntax to 'unpack':
    - Values from arrays
    - Properties from objects.
Into distinct variables.

## Array Destructuring
```js
const raceResults = ['Eliuk Kipchoge', 'Feyisa Lelisa', "Galen Rupp"];

const [gold, silver, bronze] = raceResults;
gold;   // Elius Kipchoge
silver; // Feyisa Lelisa
bronze; // Galen Rupp
```

## Object Destructuring
```js
const runner = {
    first: "Eliud", 
    last: "Kipchoge", 
    country: "Kenya", 
    title: "Elder of the Order of the Golden Heart of the Kenya"
}
const {first, last, country} = runner;
```

## Param Destructuring
```js
const fullName = ({first, last}) => {
    return `${first} ${last}`
}
const runner = {
    first: 'Eliud',
    last: "Kipchoge", 
    country: "kenya",
}
fullName(runner);   //"Eliud Kipchoge"
```