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