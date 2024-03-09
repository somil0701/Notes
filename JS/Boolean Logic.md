# Boolean Logic

## Comparisons
```js
>   // Greater than
<   // Less than
>=  // Greater than or equal to
<=  // Less than or equal to
==  // Equality
!=  // Not equal
=== // Strict Equality
!== // Strict Non-Equality
```

### == (double equals)
- Checks for equality of value, but not equality of type.
- It coerces both values to the same type and then compares them.
- This can lead to some unexpected results!

```js
7 == '7' // true
0 == false; // true
null == undefined //true
```

### === (triple equals)
Checks for equality of value and type

```js
2 === '2';  // false
10 != '10'  // false
10 !== '10' // true
```

## console.log()
prints arguments to the console

## Conditionals
### If statement
Only runs code if given condition is true

```js
let rating = 3;
if (rating === 3){
    console.log("You are a SUARSTAR");
}
```

### Else if statement
If not the first thing, then this thing.

```js
let rating = 2;
if (rating === 3){
    console.log("YOU ARE A SUARSTAR");
}
else if (ratting === 2){
    console.log("MEETS EXPECTATIONS");
}
else if (ratting === 1){
    console.log("MEETS EXPECTATIONS");
}
```

### Else
If nothing else was true, do this...

```js
console.log("INVALID RATING");
```

## Truthy and Falsy Values
- All JS values have an inherent truthyness or falsyness about them
- False values:
    - false
    - 0
    - '' (empty string)
    - null
    - undefined
    - NaN
- Everything else is truthy!

## Logical Operators
### AND
Both sides must be true, for the entire thing to be true
```js
9 > 10 && 9 >= 9;   // false
```

### OR
If one side is true, the entire thing is true
```js
1 != 1 || 10 === 10 // true
```

### NOT
!expression returns true if expression is false
```js
!null   // true
! (0===0)   // false
```

## Switch Statements
The switch statement is another control-flow statement that can replace multipl if statements.

```js
const day = 2;
switch(day){
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    case 4:
        console.log("Thrusday");
        break;
    case 5:
        console.log("Friday");
        break;
    default:
        console.log("Invalid Number!")
        break;
}
```