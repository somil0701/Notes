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

## Lesson 4

1. To put back text that has just been deleted, type p. This puts the deleted text AFTER the cursor. (if a line was deleted it will go on the line below the cursor.)

2. To replace the character under the cursor, type r and then the character you want to have there.

3. The change operator allows you to change from the cursor to hwere the motion takes you. Type ce to change from the cursor to the end of the word, c$ to change to the end of a line, etc.

4. The format for change is:
c [number] motion