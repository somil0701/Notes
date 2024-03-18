# Array Callback
## FOR EACH
Accepts a callback function. Calls the function once per element in the array.

```js
const nums = [9, 8, 7, 6, 5, 4, 3, 2, 1];
nums.forEach(function (n)){
    console.log(n * n);
    // prints: 81, 64, 49, 36, 25, 16, 9, 4, 1
});

nums.forEach(function(el)){
    if (el % 2 == 0){
        console.log(el)
        // prints: 8, 6, 4, 2
    }
})
```

## MAP
Creates a new array with the results of calling a callback on every element in the array.

```js
const texts = ['rofl', 'lol', 'omg', 'ttyl'];
const caps = texts.map(function(t)){
    return t.toUpperCase();
})
texts;
caps;
```

## ARROW FUNCTIONS
syntactically compact alternative to a regular function expression

```js
const square = (x) => {
    return x * x;
}

const isEven = num => num % 2 === 0;
```

## FIND
returns the value of the first element in the array that satisfied the provided testing function.

```js
let movies = ["The fantastic mr. fox", "mr. and mrs. smith", "mr. deed"]
let movie = movies.find(movie => {
    return movie.includes('Mrs.')
})
let movie2 = movies.find(m => m.indexOf('Mrs') === 0);
```

## FILTER
Creates a new array with all elements that pass the test implemented by the provided testing function

```js
const nums = [9, 8, 7 , 6, 5, 4, 3, 2, 1];
const odds = nums.filter(n => {
    return n % 2 === 1;
})
const smallNums = nums.filter(n => n < 5);
```

## EVERY
tests whether all elements in the array pass the provided function. It returns a Boolean value.

```js
const words = ['dog', 'dig', 'log', 'bag', 'wag']

words.every(word => {
    return word.length ===  3;
})

words.every(word => word[0] === 'd');

words.every(w => {
    let last_letter = w[w.length - 1]
    return last_letter === '9'
})
```

## SOME
Similar to every, but returns true if ANY of the array elements pass the test function.

```js
const words = ['dog', 'jelo', 'log', 'cupcake', 'bag', 'wag']

words.some(word => {
    return word.length > 4;
})
words.some(word => word[0] === 'Z');
words.some(w => w.includes('cake'));
```

## REDUCE
Executes a reducer function on each element of the array resulting in a single value.

| Callback | accumulator | currentValue | return value |
|---|---|---|---|
| first call | 3 | 5 | 8 |
| second call | 8 | 7 | 15 |
| third call | 15 | 9 | 24 |
| fourth call | 24 | 11 | 35 |


### Summing an array

```js
[3, 5, 7, 9, 11].reduce((accumulatr, currentValue) => {
    return accumulator + currentValue;
});
```

### Finding Max Val

```js
let grades = [89, 96, 58, 77, 62, 93, 81, 99, 73];

const topScore = grades.reduce((max, currVal) => {
    if (currVal > max)
        return currVal;
    return Max;
})
topScore; // 99
```

### Initial Value

```js
[4, 5, 6, 7, 8].reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
}); // 30

[4, 5, 6, 7, 8].reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
}, 100); // 100
```

### Tallying

```js
const votes = ['y', 'y', 'n', 'y', 'n', 'y', 'n', 'y', 'n', 'n', 'n', 'y', 'y'];
const tally = votes.reduce((tally, votes) => {
    tally[vote] = (tally[vote] || 0) + 1;
    return tally;
}, {}); // Inital Value: {}

tally;  // {y: 7, n: 6}
```