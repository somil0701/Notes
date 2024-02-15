# Short Notes of HTML5
## Basic Structure of an HTML

- HTML Page Structure
```html
<html>
    <head>
        <title>Document</title>
    </head>
   <body> 
        <!--Content-->
    </body>
</html>
```

- DOCTYPE Declaration
The `<!DOCTYPE html>` declaration informs the web browser about the HTML version being used.

- HTML Root Element
```html
<html>
```
The `<html>` tag is the root elemenet that encapsulates all the contents on the page.
```html
</html>
```
The `</html>` tag marks the end of the `<html>` section

- Head Section
```html
<head>
```
The `<head>` tag contains the metadata and links to external resource like CSS and JavaScript.

- Title tag
```html
<title> Document </title>
```
The `<title>` tag sets the title of the web page, which is displayed in the browser's title bar or tab.

- Body Tag
```html
<body>
```
The `<body>` tag contains the visible content of the web page. This is where text, images, and the other elements go.
```html
</body>
```

## HTML Elements
An HTML element is a complete set that consists of a starting tag(or opening tag), content, and an ending(or closing tag)
For ex:
```html
<h1> This is our first heading </h1>
```

## HTML Attributes
HTML Attributes are used to define the characteristics of an HTML element. They are placed within the element's opening tag and consist of two parts: the <b>name</b> and the <em>value</em>
- Name: specifies the property for that element
- Value: sets the value of that property for the element.

Some of the Attributes are:
1. ID Attribute
2. Class Attribute
3. Title Attribute
4. Style Attribute

## HTML Comments

- Single-line Comments
```html
<!-- This is a single line comment -->
```

- Multi-line Comments
```html
<!--
    This is a multi-line comment
    It spans multiple lines.
    -->
```

## ID and Classes
- An ID is an attribute, a unique identifier assigned to only one HTML element within a page.
It is often used for unique styling and JS manipulations.
```html
<div id="myUniqueID">This is a div with an ID.</div>
```

- The `class` attribute lets you give the same name to multiple elements. That way, you can easily change their look or behaviour all at once. Classes are not unique and can be assigned to multiple elements.
```html
<div class="myClass">This is a div with a class.</div>
<p class="myClass">This is a paragraph with the same class.</p>
```

## HTML Tables

- Syntax of HTML Table
```html
<table>
    // Table Content
</table>
```

- Key elements of HTML Table
1. `<table>`: Defines the table itself
2. `<tr>`: Used for table rows
3. `<th>`: Used for table headings
4.  `<td>`: Used for table cells(data) 

```html
<table>
  <tr>
    <th>Name</th>
    <th>Age</th>
  </tr>
  <tr>
    <td>Somil</td>
    <td>19</td>
  </tr>
</table>
```

- Rowspan and Colspan Attributes
Rowspan: If you want a table cell to span multiple rows, you can use the row span attribute.
```html
<td rowspan="value">
```

Colspan: If you want a table cell to span multiple columns, you can use the colspan attribute.
```html
<td colspan="value">
```

Some table tags: 
```html
<caption>
<thead>
<tfoot>
<tbody>
<colgroup>
<col>
<th scope="col">Name</th>
```

## HTML Forms
- HTML Forms Structure:

```html
 <form action="/submit" method="post">
    <!-- Text input for username -->
    <label for="username">Username:</label>
    <input type="text" id="username" name="username" required>
    <br><br>

    <!-- Password input -->
    <label for="password">Password:</label>
    <input type="password" id="password" name="password" required>
    <br><br>

    <!-- Radio buttons for gender -->
    <label>Gender:</label>
    <input type="radio" id="male" name="gender" value="male">
    <label for="male">Male</label>
    <input type="radio" id="female" name="gender" value="female">
    <label for="female">Female</label>
    <br><br>

    <!-- Submit button -->
    <input type="submit" value="Submit">
  </form>
```

- HTML Input Types
1. Text Input
```html
<input type="text" name="username" placeholder='Enter your username">
```

2. Password Input
```html
<input type="password" name="password" placeholder="Enter your password">
```

3. Radio Buttons
```html
<input type="radio" id="male" name="gender" value="male">
<label for="male">Male</label>
<input type="radio" id="female" name="gender" value="female">
<label for="female">Female</label>
```

4. Checkbox
```html
<input type="checkbox" id="subscribe" name="subcribe" value="yes">
<label for="subscribe">Subscribe to the newsletter</label>
```

### Textarea and Select
- The Textarea Element
The `textarea` element is used when you need multiline text input from the user. This is particularly useful for comments, reviews, or any other type of input where length is unpredictable.
```html
<textarea name="comment" rows="4" cols="50">
    Enter your comment here...
</textarea>
```

- The Select Element
The Select element creates a dropdown menu for the user. It is useful when you have a predefines list of options for the user to choose from.
```html
<select name="fruits">
    <option value="apple">Apple</option>
    <option value="banana">Banana</option>
    <option value="cherry">Cherry</option>
</select>
```

### Common Attributes

- Action
The `action` attribute specifies the URL where the form data should be sent after submission.
```html
<form action="/submit.php" method="POST">
</form>
```

- Method
The `method` attribute defines how data is sent. The two most common methods are GET and POST.
```html
<form action="/submit.php" method="POST">
</form>
```

- Name
```html
<input type="text" name="username">
```

### New HTML5 Attributes
- Placeholder
This attributes provides a hint to the user as to what can be entered in the field.
```html
<input type="text" placeholder="Enter your username">
```

- Required
The required attribute makes a field mandatory to fill out.
```html
<input type="text" required>
```

- Autofocus
the auto focus attribute automatcally focuses the cursor on the particular input when the page loads.
```html
<input type="text" autofocus>
```

- Patterns
The pattern attribute specifies a regular expression that the input must match to be valid.
```html
<input type="text" pattern="[a-zA-Z0-9]+">
```