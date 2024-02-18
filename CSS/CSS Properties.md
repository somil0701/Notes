# CSS Properties
## CSS Colors
```css
selector{
    color: value/colorname;
    color: #RRGGBB;
    color: rgb(0, 0, 255);
    color: rgba(0, 0, 0, 0.8);
    color: hsl(235, 100%, 50%)
}
```

## CSS Backgrounds
- Background Color
The background color property sets the bg color of HTML tags such as div, section, p, etc.
```css
selector{
    background-color: color;
}
```

- Background Image
It sets an image as a bg by providing the image URL within the url() function.
```css
selector{
    background-image: url('image-url')
}
```

- Background Repeat
It helps to control how the image will repeat.
```css
selector{
    background-repeat: repeat-x || repeat-y || repeat || no-repeat;
}
```

- Background Size
It sets custom sizes for the background images.
```css
selector{
    background-size: property-value;
}
```

- Background Position
It sets the starting position of the background image within the container(parent-div).
By default, the position is top left.
```css
selector{
    background-position: property-value;
}
```

- Background Attachment
It determines whether the background image scrolls with the content.
```css
div{
    background-attachment: fixed || scroll;
}
```

## CSS Borders
CSS Borders help define the visual boundaries of HTML elements. It can be text, div, p, h1, etc.

### Border Style
```html
<html lang="en">
<head>
    <style>
        .none {
            border-style: none;
        }
        .hidden {
            border-style: hidden;
        }
        .dotted {
            border-style: dotted;
        }
        .dashed {
            border-style: dashed;
        }
        .solid {
            border-style: solid;
        }
        .double {
            border-style: double;
        }
        .groove {
            border-style: groove;
        }
        .ridge {
            border-style: ridge;
        }
        .inset {
            border-style: inset;
        }
        .outset {
            border-style: outset;
        }
    </style>
</html>
```

### Border Color
The border color property sets the colour of the border. We can use colourname, hex, rgb, or hsl to set the color.
```css
        .dotted {
            border-style: dotted;
            color: purple;
        }
        .dashed {
            border-style: dashed;
            border-color: #FF0000;
        }
        .solid {
            border-style: solid;
            border-color: rgb(100, 233, 12);
        }
        .double {
            border-style: double;
            border-color: hsl(10, 50, 30);
        }
```

### Border Width
It specifies the width of the border.
```css
        .solid1 {
            border-width: 5px;

            border-style: solid;
            border-color: red;
        }
        .solid2 {
            border-width: thin; /* thin || medium || thick */

            border-style: solid;
            border-color: #FF0000;
        }
```

### Border Radius
```css
        .solid1 {
            border-radius: 20px;

            border-style: solid;
            border-color: red;
        }
        .solid2 {
            border-radius: 25%;

            border-style: solid;
            border-color: #FF0000;
        }
```

### Set the border of individual corners
```css
selector {
     border-radius: 10px 5px 15px 35px ;
     /* border-radius: top-left top-right bottom-right bottom-left ; */

}
```

### Border Collapse
```css
selector{
    border-collapse: collapse;
}
```

### Border Spacing
```css
selector{
    border-spacing: 5px;
}
```

### Shorthand
```css
select{
    border: width style color;
}
```

## CSS Fonts

### Font Color
```css
selector{
    color: red;
}
```

### Font Size
The most commonly used units for font size are px, em, rem and %.
- px: Useful for setting precise sizes.
- em: Is a relative unit, based on the font size of the parent element.
- rem: Based on the font size of the root element.

```css
        #p1 {
            font-size: small;
        }
        #p2 {
            font-size: medium;
        }
        #p3 {
            font-size: large;
        }
        #p4 {
            font-size: larger;
        }
        #p5 {
            font-size: 25px;
        }
        #p6 {
            font-size: 2em;
        }
        #p7 {
            font-size: 2rem;
        }
        #p8 {
            font-size: 50%;
        }
```

### CSS Font Style
There are three types of font styles: italic, normal and oblique.
```css
        #p1 {
            font-style: italic;
        }
        #p2 {
            font-style: normal;
        }
        #p3 {
            font-style: oblique;
        }
```

### CSS Font Weight
It controls the thickness or boldness of the text and ranges from 100(thin) to 900(ultra-bold).

```css
        #p1 {
            font-weight: 100;
        }
        #p2 {
            font-weight: 200;
        }
        #p3 {
            font-weight: 300;
        }
        #p4 {
            font-weight: 400;
        }
        #p5 {
            font-weight: 500;
        }
        #p6 {
            font-weight: 600;
        }
        #p7 {
            font-weight: 700;
        }
        #p8 {
            font-weight: 800;
        }
        #p9 {
            font-weight: 900;
        }
        #p10 {
            font-weight: lighter;
        }
        #p11 {
            font-weight: bold;
        }
        #p12 {
            font-weight: bolder;
        }
```

### Font Family
It specifies the font stack. It can be used to set the preferred font for the text content.

```css
selector{
    font-family: font1, font2, font3;
    /* https://fonts.google.com */
}
```

## CSS Text Styling

### Text Decoration
It adds various types of text decorations.
```css
selector{
    #p1 {text-decoration: overline;}
    #p2 {text-decoration: underline;}
    #p3 {text-decoration: line-through;}
    #p4 {text-decoration: overline underline;}
}
```

### Text Alignment
It is used to align the text within the container. Container can be a div, section, etc.
```css
#p1 {text-align: left;}
#p2 {text-align: right;}
#p3 {text-align: end;}
#p4 {text-align: justify;}
```

### Text Transformation
It transforms the text case.

```css
        #p1 {text-transform: uppercase;}
        #p2 {text-transform: lowercase;}
        #p3 {text-transform: capitalize;}
        #p4 {text-transform: none;}
```

### Letter Spacing
It allows to specify the spacing between each character in the text.
```css
h1{
    letter-spacing: 5px;
}
```

### Line Height
It controls the spacing between the two lines of text.
```css
h1{
    line-height: 3.5;
}
```

### Text Shadow
It adds a shadow to the text
```css
h1{
    text-shadow: Horizontal offset, vertical offset, blur radius, color;
}
```

### Text Overflow
The text-overflow property handles text that overflows its container.

There are two values we can use with text-overflow:
- ellipsis: Truncates overflowing text with an ellipsis.
- clip: clips the text without any visual indication

## CSS Box Model
The CSS Box Model defines how elements are rendered and how their dimensions are calculated.
It describes the structure of an element as a rectangular box that has content, padding, a border, and a margin.

1. Content
- The innermost component of the box model is the actual content of the element.
- The content area is defined by the width and height properties.

2. Padding
- The space between the actual content and the border of the element is the padding.
- The padding area is defined byt he proeprty <em>padding</em>.

3. Border
- The border surrounds the content and padding and gives the visual border of the element.

4. Margin
- The margin in the space outside the elemen that separates it from other element in the layout.

Total Width = Width + Left Padding + Right Padding + Left Border + Right Border + Left Margin + Right Margin

Total Height = Height + Top Padding + Bottom Padding + Top Border + Bottom Border + Top Margin + Bottom Margin

```css
p{
    width: 200px;
    height: 300px;
    padding: 15px;
    border: 10px solid red;
    margin: 5px;
        }
```

## CSS Padding
It gives internal spacing and helps to enhance the website.

Different ways for padding:
- Method 1
```css
selector{
    padding: value;
}
```

- Method 2
```css
selector{
    padding: value1 value2;
}
```

- Method 3
```css
selector{
    padding: value value1 value2 value 3;
}
```

Padding Cycle:
Top -> Right -> Bottom -> Left

## CSS Margin
It gives external spacing and differentiates two or more elements.

```css
#p2{
    margin: 15px 30px 25px 50px;
    border: 2px solid red;
}
```

## CSS Sizing Properties

### Absolute Units
1. cm
2. mm
3. in
4. pt
5. pc
6. px
Generally we only use pixels to set dimensions of an element

### Relative Units
1. em - Relative to the font size of the parent element. eg. %em means the size would be 5 times the current font size.
2. ex - Relative to X height of the existing font.
3. ch - Relative to the width/radius of the character "0".
4. rem - Relative to the font size of the root element.
5. vw - Relative to 1% of the width of the viewport. (Viewport is the area of the website visible to the user).
6. vh - Relative to 1% of the height of the viewport.
7. % - Relative to the parent element's size.

## CSS List Styles

### Unordered List Styling
```css
ul {
    list-style-type: value;
}
```
The value can be
- disc: (default) - Filled circle marker
- circle
- square
- none

### Ordered List Styling
```css
ol {
    list-style-type: value;
}
```
The value can be:
1. decimal
2. decimal-leading-zero
3. lower-roman
4. upper-roman
5. lower-alpha
6. upper-alpha

### List-style position
This property determines where the list markers(bullets or numbers) areplaced in relation to the content.
It has two values:
- inside: (default) list markers are inside the content's box.
- outside: list markers are outside the content's box, typically to the left of the content, creating a hanging indent effect.

## CSS Overflow
### Overflow Hidden
It hides the content which doesn't fit the box.
```css
div {
            background-color: rebeccapurple;
            width: 200px;
            height: 60px;
            border: 2px solid;
            overflow: hidden;
        }
```

### Overflow Scroll
It adds an automatic scroller in the container so for the seeing the content it can be scrolled without affecting the container dimensions.
```css
div {
            background-color: rebeccapurple;
            width: 200px;
            height: 60px;
            border: 2px solid;
            overflow: scroll;
        }
```

### Overflow Auto
It is quite similar to scroll but the scroller is only added when the content starts getting out of the container.

## CSS Positioning
It helps to determine how elements are placed inside the container element and how they interact with the other elements on th epage.
There are various types of position property values, such as:

### Static(Default)
The elements are positioned according to the normal flow of the document
```css
selector{
    position: static;
}
```

### Relative
Elements are positioned relative to the normal position in the document.
You can use the top, right, bottom, and left properties to move the element from its original position.
```css
selector{
    position: relative;
    left: 100px;
    top: 100px;
}
```

### Absolute
Elements are positioned relative to the closest positioned ancestor(parent), which means we need to have a parent element with a positioning other than 'static'.
Note: An absolutely positioned element is removed from the normal flow.
```css
#about{
    position: relative;
}
.logo{
    position: absolute;
    right: 10px;
    top: 10px;
}
```

### Fixed
Elements are positioned relative to the viewport (screen) and do not move when the page is scrolled.
This is useful for creating elements like fixed headers or footers.
```css
h1{
    position: fixed;
    top: 10px;
    right: 20px;
}
```

### Float
The float property is used to shift an element to the left or right within it's containing element.

### Sticky
Position sticky is a hybrid between 'relative' and 'fixed'.
It allows an element to become "stuck" to the top or bottom of its container when scrolling, but it behaves like relative positioning within the container until it reaches a specified offset.
```css
h1{
    position: sticky;
    top: 10px;
    right: 20px;
}
```

