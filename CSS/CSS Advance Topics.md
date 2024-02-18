# CSS Advance Topics

## CSS Shadows
### Box Shadows
<code>box-shadow</code> is a popular CSS property that enables designers to add shadow effects around an element's frame. It can be used to give any element, be it a div, image, or button, a 3D feel or to emphasize on hover.
```css
<!-- syntax -->
box-shadow: h-offset v-offset blur spread color inset;

.selector{
    box-shadow: 5px 5px 15px #888888;
}
```

- h-offset and v-offset: Determines the shadow's horizontal and vertical position.
- blur: The largeer the value, the blurrier the shadow.
- spread: Expands or shrinks the shadow size.
- color: Defines the shadow color.
- inset: Makes the shadow inner.

### Text Shadows
<code>text-shadow</code> is utilized to give shadows specifically to the text. It can elevate teh readibility of the text or give it an elegant appearance.
```css
<!-- syntax -->
text-shadow: h-offset v-offset blur color;
.text-element {
    text-shadow: 2px 2px 4px #888888;
}
```

### Outlines
An outlines is a line that is drawn around elements, outside the borders, to make the element "stand out". It's commonly used for accessibility purposes, like highlighting focused elements.
```css
/* syntax */
outline: width style color;
.button-element: focus {
    outline: 2px solid blue;
}
```

### Differences between Outlines and Borders:
1. Position: Outlines don't take up space; they're drawn around the element, outside of any border.
2. Wdith: Borders can have varying widths on different sides, outlines have a uniform width.
3. Rounded Corners: Borders can have rounded corners using border-radius, while outlines generally cannot.