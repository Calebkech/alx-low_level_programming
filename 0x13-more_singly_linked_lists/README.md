# 0-print_listint.c

The C program that defines a function called `print_listint`. This function is used to print all the elements of a linked list of integers. It takes a pointer to the head of the linked list as its argument and returns the number of elements in the list, which is of type `size_t`.

Here's a breakdown of the code:

1. The `#include "lists.h"` directive is used to include a header file named "lists.h." This header file likely contains the definition of the `listint_t` structure and any necessary declarations for the linked list.

2. The `#include <stdio.h>` directive is used to include the standard I/O library for functions like `printf`.

3. The function `print_listint` is defined. It takes a single argument `h`, which is a pointer to the head of the linked list.

4. Inside the function, a variable `count` of type `size_t` is declared and initialized to 0. This variable will be used to keep track of the number of elements in the list.

5. A `while` loop is used to iterate through the linked list. The loop continues as long as `h` is not `NULL`, meaning there are more elements in the list.

6. Inside the loop, `printf` is used to print the value of the integer `n` stored in the current node pointed to by `h`. This prints each element of the linked list.

7. After printing the current element, the `h` pointer is updated to point to the next element in the list (i.e., `h = h->next`).

8. The `count` variable is incremented by 1 for each element printed.

9. The loop continues until all elements in the list have been printed.

10. Finally, the function returns the value of `count`, which represents the total number of elements in the linked list.

The function essentially traverses the linked list, printing each element, and returns the count of elements in the list. This is a common pattern for printing linked lists in C.

