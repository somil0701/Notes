# Introduction to Asynchronous JavaScript

## Call Stack
The mechanicsm the JS interpreter uses to keep track of its place in a script that calls multiple functions.

How JS "knows" what function is currently being run and what functions are called from within that function, etc.

## How it works?
- When a script calls a function, the interpreter adds it to the call stack and then starts carrying out the function.

- Any functions that are called by that function are added to the call stack further up, and run where their calls are reached.

- When the current function is finished, the interpreter takes it off the stack and resumes execution where it left off in the last code listing.

## JS is Single Threaded
At any given point in time, that single JS thread is running at most one line of JS code.

## Promises
A promise is an object representing the eventual completion or failure of an asynchronous operation.

It is a pattern for writing async code.

A promise is a returned object to which you attach callbacks, instead of passing callbacks into a function

```js
loadRedditPosts('/r/funny')
    // this runs if promise is resolved:
    .then((res) => {
        console.log(res.data);
    })
    // this runs if promise is rejected:
    .catch((err) => {
        console.log("Oh No!", err);
    })

const makeFakeRequest = () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const randNum = Math.random();
            if (randNum > 0.5 ) resolve ({ data: 'lol', status: 200});
            reject({status: 404, data" 'NO DICE'})
        })
    })
}
```

## Async Functions
A newer and cleaner syntax for working with async code!

### The async keyword
- Async functions always return a promise.
- If the function returns a value, the promise will be resolved with that value.
- If the functions throws an exception, the promise will be rejected.

### The await keyword
- We can only use the await keyword inside of functions declared with async.
- await will pause the execution of the function, waiting for a promise to be resolved.