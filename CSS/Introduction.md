# Introduction To CSS

## What is CSS?
CSS stands for Cascading Style Sheets.

## How does CSS work?
```css
selector {
    property: value;
}
```

## Adding CSS to HTML
```html
<style>
    body  {
        text-align: center;
        color: white;
        background-color: purple;
    }
</style>
```

## Ways to Add CSS
There are three different ways to add CSS to an HTML page, which are:
1. Inline CSS
2. Internal CSS
3. External CSS

- Inline CSS
It is used to add custom properties ot specific elements.
```html
<h1 style="color: purple;">I'm somil</h1>
<h2>I'm somil</h2>
```

- Internal CSS
Internal CSS is defined in a <em>style block</em>, which will be inside the <em>head section</em>.

```html
<head>
    <style>
        p {
            color: red;
        }
    </style>
</head>

<body>
    <h1>Somil</h1>
    <p>I'm Somil, from IITM and ADGITM</p>
    <p>I'm a Developer</p>
</body>

</html>
```

- External CSS
External CSS works similarly to internal CSS but, instead of adding the styles within the HTML file, we create a separate file with .css extension.

1. &lt;link&gt;: This tag is used to create links between different resources, like stylesheets, fonts, and more.

2. rel="stylesheet": rel stands for relationship. This defines the type of relationship between the HTML document and the linked resource. 

3. href="style.css": The href attribute stands for "hypertext reference". It specifies tha path or URL to the external resource we want to link.

## CSS Selectors
CSS selectors allow us to choose specific elements and apply styles to them.

There are different types of CSS Selectors:

### Universal Selector
```css
* {
    property: value;
}
```

### Element Selector
```css
p {
    property: value;
}
```

### ID Selector
```css
#ID {
    property: value;
}
```

### Class Selector
```css
.class {
    property; value;
}
```

### Group Selector
```css
div, p, a{
    property: value;
}
```

## CSS Comments
### Single-line comment
```css
selector{
    /* property: value */
}
```

### Multi-line comments
```css
selector{
    /* property1: value1
    property1: value1
    property1: value1 */
}
```

## CSS Specificity
It is a value or weight assigned to a CSS selector. The higher the specificity, the more precedence the selector has.

### The Cascade Algorithm
It is an algorithm meant for solving conflicts where multiple CSS rules apply to an HTML element.

Stages of Cascade Algorithm:
1. Position and order of appearance
2. Specificity
3. Origin
4. Importance

- Effect of Position
If there are two rules that have selectors of identical specificity, the last one declared won.

- Specificity
The order of specificity is:
<b>Inline Style > ID Selector > Class or Attribute Selector > Element Selector > Universal Selector</b>

- Specificity Calculation
To calculate specificity, assign a value to each part of the selector:
    - Universal Selector: 0
    - Element Selectors and pseudo-elements: 1
    - Class selectors, attribute selectors, and pseudo-classes: 10
    - ID Selectors: 100
    - Inline Styles: 1000

```css
<h1 id="title" class="h1">Somil</h1>
```

Here the specificity value will be 111, because ID has a specificity of 100, the class has a specificity of 10, and the h1 element has a specificity of 1.

- Importance
The !importance flag in CSS is used to give a particular style rule the highest level of importance, overriding any competing styles. It has a specificity score of <b>10,000 points</b>.


