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

## HTML Lists

### Types of HTML Lists
- Unordered List: Displays items using bullets.
- Ordered List: Displays items in a numerical sequence, and supports various numbering styles like Arabic numerals, Roman numerals, and so on.
- Definition List: Organizes items in a format similar to a dictionary, with terms and their corresponding definitions.

### Unordered List
```html
<ul>
  <li>Pen</li>
  <li>Pencil</li>
  <li>Eraser</li>
</ul>
```

Output:
- Pen
- Pencil
- Eraser

Types: disc, square and circle(type attribute)

### Ordered List
```html
<ol>
  <li>Mango</li>
  <li>Orange</li>
  <li>Litchi</li>
</ol>
```

Output:
1. Mango
2. Orange
3. Litchi

### Definition List
```html
  <h1>HTML Definition List</h1>
  <dl>
    <dt>HTML</dt>
    <dd>HyperText Markup Language: The standard language for creating web pages.</dd>

    <dt>CSS</dt>
    <dd>Cascading Style Sheets: A stylesheet language used for describing the look and formatting of a document written in HTML.</dd>

    <dt>JavaScript</dt>
    <dd>A programming language commonly used in web development to add interactive features.</dd>
  </dl>
```

Here, 
- `<dl>` is the container for the list
- `<dt>` defiens the terms that you want to explain
- `<dd>` contains the definition or explanations for the terms.

## Video and Audio Tags

### The &lt;video&gt; Tag
The &lt;video&gt; is used to embed video files in an HTML document. It supports multiple attributes to control the video playback.
```html
<video src="video.mp4" controls></video>
```

Attributes for &lt;video&gt; Tag
- src: Specifies the path to the video file.
- controls: Adds video controls, like play, pause, and volume.
- autoplay: Automatically starts playing the video when the page loads.
- loop: Repeats the video once it ends.
- muted: Mutes the video by default.
- poster: Specifies an image to be displayed before the video starts playing.
- width and height: Specifies the dimensions of the video.

### The &lt;audio&gt; Tag
The &lt;audio&gt; tag is used to embed audio files in an HTML document. It also supports multiple attributes for control.
Ex:
```html
<audo src="audio.mp3" controls></audio>
```

Attributes for &lt;audio&gt; Tag
- src: Specifies the path to the audio file.
- controls: Adds audio controls, like play, pause, and volume.
- autoplay: Automatically starts playing the audio when the page loads.
- loop: Repeats the audio once it ends.
- muted: Mutes the audio by default.
- preload: Specifies if and how the audio should be loaded when the page loads ('auto', 'metadata', 'none').

## SVG in HTML
SVG stands for Scalable Vector Graphics. Unlike raster images, SVGs are non-pixel-based.

```html
<svg height="100" width="100">
    <circle cx="50" cy="50" r="40" stroke="black" stroke-width="3" fill="red" />
</svg>
```

## iFrames in HTML
An iFrame is an HTML element that enables an inline frame for the embedding of external content. Essentially, you can load another web page within a designated area of your current webpage.

```html
<iframe src="URL" width="width" height="height"></iframe>
```

## Code Tag in HTML
The &lt;code&gt; tag is a semantic HTML tag that's used for displaying coding snippets. It can be both inline and within a block-level element like &lt;pre&gt;

```html
<pre><code>Your Multiline code here</code></pre>
```

## HTML Semantic tags
Semantic tags add meaning to your HTML.
Here are some of the key semantic tags you must know about:

- &lt;header&gt;: Used to represent the top section of a web page, often containing headings, logos, and navigation.

- &lt;nav&gt;: Signifies a navigation menu on a web page.

- &lt;article&gt;: Indicates a self-contained piece of content, such as a blog post or news article.

- &lt;section&gt;: Represents a thematic grouping of content on a web page.

- &lt;aside&gt;: Typically used for sidebars or content that is tangentially related to the main content.

- &lt;footer&gt;: Represents the footer of a web page, usually containing copyright information and contact details.

- &lt;figure&gt; and &lt;figcaption&gt;: Used for embedding images, diagrams, or charts, along with a caption.

- &lt;main&gt;: Signifies the main content area of a web page.

- &lt;time&gt;: Used to represent time-related information, like dates and times.

They enhance SEO, improve accessibility, and make your code easier to read and maintain.

Examples:
Using the &lt;header&gt; tags and &lt;footer&gt; tags
```html
<header>
    <h1>My Website</h1>
    <nav>
        <ul>
            <li><a href="#">Home</a></li>
            <li><a href="#">About</a></li>
            <li><a href="#">Services</a></li>
            <li><a href="#">Contact</a></li>
        </ul>
    </nav>
</header>

<footer>
    <p>Copyright 2023</p>
</footer>
```

Using the &lt;article&gt; and &lt;section&gt; tags
```html
<article>
    <h2>Article Title</h2>
    <section>
      <p>Content here</p>
    </section>
</article>
```

Using the &lt;aside&gt; and &lt;nav&gt; tags
```html
<aside>
    <p>This is an aside content</p>
  </aside>
<nav>
    <ul>
      <li>Home</li>
      <li>About</li>
    </ul>
</nav>
```

Using the &lt;figure&gt; and &lt;figcaption&gt; tags
```html
<figure>
    <img src="image.jpg" alt="An example image">
    <figcaption>This is an example image.</figcaption>
</figure>
```

## HTML Entities

### Common HTML Entities
```
&lt;  for <
&gt;  for >
&amp; for &
&nbsp; for a non-breaking space
&copy; for ©
```

## HTML Quotation Tag
The &lt;blockquote&gt; and &lt;q&gt; tags serve to define quotations in HTML. While &lt;blockquote&gt; is used for longer, block-level quotes, &lt;q&gt; is used for shorter, inline quotes.

Basic Syntax:
```html
<blockquote cite="source-url">
  Quotation text here.
</blockquote>
<q cite="source-url">Quotation text here.</q>
```