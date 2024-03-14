# Arrays
Arrays refers to ordered collection of values.
- List of comments on IG post
- Collection of levels in a game.
- Songs in a playlist.

## Creating Arrays
```js
let students = [];
let colors = ['red', 'orange', 'yellow'];
let lottoNums = [19,22,123,56634,123];
let stuff = [true, 68, 'cat', null];
```

Arrays are Indexed.
Each element has a corresponding index(counting starts at 0)

## Modifying Arrays
```js
let colors = ['rad', 'orange', 'green', 'yellow'];

colors[0] = 'red';
colors[2] = 'yellow';
colors[3] = 'green';
colors[4];
colors[4] = 'blue;
//['red', 'orange', 'yellow', 'green', 'blue']
```

## Array Methods
- Push -  add to end
- Pop - remove from end
- Shift - remove from start
- Unshift - add to start

More methods:
- concat - merge arrays
- includes - look for a value
- indexOf - just like string.indexOf
- join - creates a string from an array
- reverse - reverses an array
- slice - copies a portion on an array
- splice - removes/replaces elements
- sort - sorts an array

## Const and Arrays
```js
const myEggs = ['brown', 'brown'];
myEggs.push('purple');  // OK
myEggs[0] = 'green';    // OK

myEggs = ['blue', 'pink'];  // NO
```

## Nested Arrays
```js
const board = [['0', null, 'X'], [null, 'X', '0'], ['X', '0', null]]
```
