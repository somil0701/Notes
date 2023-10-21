# Memory Allocation in C

## What is Dynamic Memory?  
Dynamic memory allocation is the process of allocation of memory space at the run time.

## Stack
The stack is a LIFO data strucutre. It's size increases when the program moves forward.

Stack Overflow: When a stack gets exhaused due to bad programming skills or some logical error, the phoenomenon is known as Stack Overflow.

## Heap
Heap is a tree-based data structure. It's size increases when we allocate memory dynamically. To use the heap data structure, we have to create a pointer in our main function that will point to some memory block in a heap.

## Dynamic Memory Allocation
For the allocation of memory using the heap, we have four functions: 
- Malloc
- Calloc
- Realloc
- Free

## Malloc
Malloc stands for memory allocation. It requests memory form the heap and returns a pointer to the memory. The pointer is of the void type, so that we can typecast it for any variables. All the values at the allocation time are intialized to garbage values.

Syntax 
`ptr = (ptr-type*) malloc(size_in_bytes)`
`int *ptr;`
`ptr = (int*) malloc(3*sizeof(int))`


## Calloc
Calloc stands for contiguous allocation. It has the same functionality as mallac() with two differences. We have to send as parameters the no. of blocks needed along with their size. The values at the allocation time are initialized to 0 instead of garbage values.

```C
ptr = (ptr-type*) calloc(n_size_in_bytes)
int *ptr;
ptr = (int*)malloc(10,sizeof(int))
```

## Realloc
Realloc stands for reallocation. It is used in cases where the dynamic memory is insufficient or wants to incerase the already allocated memory to store the more data.

```C
ptr = (ptr-type*) realloc(ptr, new_size_in_bytes)
ptr = (int*) realloc(ptr, 5*sizeof(int))
```

## Free
Free is used to free up the space occupied by the allocated memroy.
`free(ptr)`

# Storage Classes
A storage class defines scope, default intial value, and a lifetime of a variable.
There are four types of storage classes: 
- Automatic Variables
- External Variables
- Static Variables
- Register Variables

## Auto Storage Class
Variables being formed in a function and whose storage class has not been defined initially fall in this category automatically. Its scope is minimum as it can only be accessed inside the function it is intialized in. No other function can access it. It stores a garbage value by default. Their lifetime depends upon the function block's length.

## External Storage Class
These sorts of variables are defined outside the function, hence can be used inside any function, meaning that they can be used globally. Their intial value is set to 0. Their lifetime is equal to the lifetime of the program.

- Extern Keyword
Using the extern keyword, we inform our compiler that thae variable is already declared at some other place. By doin so, we can use the same variable with the same space, without allocating its new memory and accessing the same variable in some other file.
`extern int a;`

## Static Storage Class
Static Variable's lifetime is througout the program, but their scope is limited to a function. Their intial default value is 0.
`static int a;`

## Register Storage Class
It is very similar to the auto class as its scope is limited to the function. The intial default value is 0, and the lifetimes is till the end of the function block. 
The major difference is that it requests the CPU's register memory instead of the local memory for fast access. It is usally used for the program that need to be accessed faster than the other.
`register int a;`