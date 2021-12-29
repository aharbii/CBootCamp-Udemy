/**********************************************************************************************************************
 *  Dynamic Memory Allocation
 * 
 * --> Why can dynamic memory allocation be useful?
 * --> In memory, where are the variables we use?
 *      -> Static: global variable storage, permanent for the entire run of the program.
 *                 - Life cycle as the entire life of the program.
 *                 - Global variables, declared outside functions.
 *                 - Static variables, declared inside functions.
 *                 - Only one copy of that variable for the whole program.
 * 
 *      -> Stack:  local variable storage(automatic, continuous memory, LIFO).
 *                 - Automatically managed.
 *                 - Grows and shrink as LIFO (Last In First Out).
 *                 - Local variables and parameters of a function.
 *                 - Life cycle limited to the life cycle of that function.
 *                 - Limited pool of memory.
 *                 - Stack overflow may occur!
 * 
 *      -> Heap:   dynamic storage (large pool of memory, not allocated in contiguous order).
 *                 - Managed by the programmer.
 *                 - Allocation and the deallocation with special functions.
 *                 - Large pool of memory, physical memory bounds.
 *                 - Memory blocks managed using pointers.
 *                 - Memory leaks can occur!
 * 
 * --> Functions:
 *      -> Malloc:  Allocate memory                                  void *malloc(size_t size)
 *      -> Calloc:  Allocate array of elements                       void *calloc(size_t num, size_t size)
 *      -> Realloc: Reallocate memory                                void *realloc(void *ptr, size_t new_size)
 *      -> free:    Free memory                                      void free(void *ptr)
**********************************************************************************************************************/

