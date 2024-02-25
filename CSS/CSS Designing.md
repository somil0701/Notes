# CSS Designing

## CSS Display
This property specifies and determines how an element would be displayed on the website.

### Display Inline
It only takes the space required for the content, leaving the rest space for other elements to come.
```css
syntax{
    display: inline;
}
```

### Display Block
It takes the full width availabe across the website page leaving a new line before and after the element.
```css
syntax{
    display: block;
}
```

### Display Inline Block
This property is quite similar to inline but dimension proeprties are allowed in the case of inline-block display.

### Display None & Hidden
This proeprty removes the element from the document, clearing the space taken by the element. When the display is hidden, thought the element isn't visible the space is still taken by the element.

## CSS Media Queries
Media queries help to add responsiveness to the website by adding breakout points or when only a certain condition is true.

```css
@media only screen and (max-width:800px){
    p{
        color: yellowgreen;
    }
}
```

## CSS FlexBox
Flexbox aka Flexible Box Layout makes it easier to layout, align and style items in the container while maintaining the responsiveness of the website.

To create a flexbox,
```css
selector{
    display: flex;
}
```

This element is called the flex container, and stores the sub-elements which are known as flex items.

### Flex Container Properties
1. Flex Direction
It defines in which direction the flex elements would be displayed. It takes values like row, column or "reverse" too.
```css
.flex-container{
    display: flex;
    flex-direction: column;
}
```

2. Flex Wrap
By using this property we can make our elements responsive for different screen sizes.

```css
.flex-container{
    display: flex;
    flex-direction: row;
    flex-wrap: wrap;
}
```

You can use flex flow as a short to add both these properties. Eg; {flex-flow: row wrap}

3. Justify Content
This property is used to set the position of content or rather align content along the main axis.

```css
.flex-container{
    display: flex;
    flex-direction: row;
    justify-content: center;
}
```

It can take other values too like "space-around" which distributes flex items equally spaced in the container. Other properties include flex-end, flex-start, space-between, etc.

4. Align Items
Just like the justify-content property, align-items define the alignment of the flex container but along the cross-axis.

```css
.flex-container{
    display: flex;
    height: 200px;
    flex-direction: row;
    align-items: center;
}
```

5. Align Content
This property is very similar to align items but here rather than the flex items, the content present in the items is selected for the property.

```css
.flex-container{
    display: flex;
    flex-direction: row;
    align-content: center;
}
```

### Flex Items Properties
1. Order
As the name suggests, this property sets the order in which the flex items are show.

```css
<div style="order: 4;">1</div>
<div style="order: 3;">2</div>
<div style="order: 2;">3</div>
<div style="order: 1;">4</div>
<div style="order: 5;">5</div>
```

2. Flex Grow and Shrink
Decides the relative size of flex items. By default, this property is zero and thus items have the same size.
```html
<div style="flex-grow: 3;">3</div>
```

We can also use flex-shrink to decrease size of an element.

3. Align Self
This property allows default alighnment to be overridden for the individual flex items.