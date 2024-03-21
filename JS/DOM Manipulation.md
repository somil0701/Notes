# Document Object Model
- The DOM is a JavaScript representation of a webpage.
- It's your JS "window" into the contents of a webpage.
- It's just a bunch of objects that you can interact with via JS.

## Document
The document object is our entry point into the world of the DOM. IT contains representations of all the content of a page, plus tons of useful methods and properties.

## Selecting and Manipulating
### Selecting
- getElementById
- getElementsByTagName
- getElementsByClassName

### querySelector
- A newer, all-in-one method to select a single element.

```js
// Finds first h1 element
document.querySelector('h1');

// Finds first element with ID of red:
document.querySelector('#red');

// Finds first element with the class of .big
document.querySelector('.big');
```

### querySelectorAll
Same idea, but returns a collection of matching elements.

## Properties and Methods(IMP)
- classList
- getAttribute()
- setAttribute()
- appendChild()
- append()
- prepend()
- removeChild()
- remove()
- createElement
- innerText
- textContent
- innerHTML
- value
- parentElement
- children
- nextSibling
- previousSibling
- style