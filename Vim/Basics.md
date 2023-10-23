# How to Use VIM
## Lesson 1

1. The cursor is moved using either the arrow keys or the hjkl keys.
h(left) j(down) k(up) l(right)

2. To start Neovim from the shell prompt type: 
$ nvim FILENAME

3. To exit Neovim type: <Esc> :q! <Enter> to trash all changes. 
OR type: <Esc> :wq <Enter> to save the changes.

4. To delete the character at the cursor type: x

5. To insert or append text type:
i insert text <Esc> insert before the cursor.
A append text <Esc> append after the line.

Notes: Pressing <Esc> will place you in Normal mode or will cancel an unwanted and partially complete command.

## Lesson 2

1. To delete from the cursor up to the next word type: dw

2. To dete from the cursor to the end of a line type: d$

3. To delete a whole line type: dd

4. To repeat a motion prepend it with a number: eg. 2w

5. The format for a change command is: operator [number] motion

where: 
operator - is what to do, such as d for delete
[number] - is an optional count to repeat the motion.
motion - moves over the text to operateo on, such as:
w (word), $(to the end of the line), etc.

6. To move to the start of the line use a zero: 0

7. To undo previous actions, type: u
To undo all the previous actions on a line, type: U
To undo the undo's, type <Ctrl + r>

## Lesson 3

1. To put back text that has just been deleted, type p. This puts the deleted text AFTER the cursor. (if a line was deleted it will go on the line below the cursor.)

2. To replace the character under the cursor, type r and then the character you want to have there.

3. The change operator allows you to change from the cursor to hwere the motion takes you. Type ce to change from the cursor to the end of the word, c$ to change to the end of a line, etc.

4. The format for change is:
c [number] motion

## Lesson 4

1. <C-g> displays your location and the file status.
G moves to the end of the file.
number G moves to that line number.
gg moves to the first line.

2. Typing / followed by a phrase searches FORWARD for the phrase.
Typing ? followed by a phrase searches BACKWARD for the phrase.
After a search type n to find the next occurrence in the same direction or N to search in the opposite direction.
<C-o> takes you back to newer positions, <C-i> to newer positions.

3. Typing % while the cursor is on a (,) , [,], {, or } goes to its match.

4. To substitute new for the first new in a line type
:s/new/new
To substitute new for all 'new's on a line type
:s/new/new/g
To substitute phrases between two line #'s type
:#,$s/new/new/g
To sbustite all occurrences in the file type
:%s/new/new/g
To ask for confirmation each time add 'c'
:%s/new/new/gc

## Lesson 5

1. :!command executes an external command.

Some useful examples are:
:!ls - shows a directory listing
:!rm FILENAME - removes file FILENAME

2. :w FIlENAME writes the current Neovim file to disk with name FILENAME

3. v motion :w FILENAME saves the Visually selected lines in FILENAME.

4. :r FILENAME retrieves disk file FILENAME and puts it below the cursor position.

5. :r !dir reads the output of the dir command and puts it below the cursor positions.

## Lesson 6

1. Type o to open a line BELOW the cursor and start Insert mode.
Type O to open a line ABOVE the cursor.

2. Type a to insert text AFTER the cursor.
Type A to insert text after the end of the line.

3. The e command moves to the end of a word.

4. The y operator copies text, p pastes it.

5. Typing a capital R enters Replace mode until <Esc>.

## Lesson 7

1. Type :help or press <F1> or <Help> to open a help window.

2. Type :help TOPIC to find help on TOPIC

3. Type <C-w><C-w> to jump to another window

4. Type :q to close the help window

5. Create an init.vim startup script to keep your preferred settings.

6. While in command mode, press <C-d> to see possible completions. Press <Tab> to use one completion.



