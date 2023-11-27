# File I/O in C

## Purpose of Files in C
- Files are used to store content hence reducing the program's size.
- We can read or access data from files.
- The data in files remain stored even after the program's execution is terminated.

## Difference between Volatile and Non-Volatile Memory
Files are stored in non-volatile memory

### Volatile Memory
- The data can only remain in it while the computer's power is on.
- Can only hold information when having a constant power supply.
- Will hold data for a short period.
- Eg. RAM(Random Access Memory)

### Non-Volatile Memory
- The data will also be present in it while the computer's power if off
- Can also hold information, in case of inconstant power supply
- Will hold data for a long term.
- Eg. Hard Disk

## Types of Files
There are 2 types of files:
- Binary Files
- Text Files

### Binary Files
- Binary files stores data in binary format.
- They are not directly readable.
- An examples is a .doc file.

### Text Files
- They store data in simple text format.
- They are directly readable.
- An example is a .txt file.

## Operations on Files
- Creating a File
- Opening a File
- Closing a File
- Read/Write to a File

# Functions for FILE I/O in C
First we have to declare a pointer of the File type to work with files.

Modes:
- r: opens a file for reading
- w: opens a file for writing. It can also create a new file.
- a: opens a file for appending.
- r+: opens a file for both reading and writing but cannot create a new file.
- w+: opens a file for both reading and writing.

## Opening a File
We use the fopen() functiuon for opening files in C.
`ptr = fopen("File_Location", "mode");`
`ptr = fopen("D:\\file.txt", "w");`

## CLosing a File
To close a file, we have to use the fclose() function.
`fclose(fptr);`

## Reading a File
To read a file in C, we can use a function fscanf(). We have to send the file pointer as an argument for the program to be able to read it.

```C
ptr = fopen("D:\\file.txt", "r");
char str[120] = "Welcome to code with Harry";
fscanf(ptr, "%s", str);
printf("%s", str);
```

## Writing to a File
In order to write to a file, we can use the function fprintf(). We have to send the file pointer as argument for the program to be able to print it into the file.

```C
char str[120] = "Empty";
ptr = fopen("D:\\file.txt","w");
fprintf(ptr, "%s", str);
```