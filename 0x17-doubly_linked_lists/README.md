# C - Doubly Linked Lists Project Overview

In this programming project, I delved into the world of doubly linked lists using the C programming language. The project encompasses a series of tasks that involve creating, manipulating, and managing doubly linked lists. Below is an organized summary of the project's structure, including essential files, functions, and their descriptions.

## Tests :heavy_check_mark:

- [tests](./tests): This directory contains test files provided by Holberton School for evaluating the correctness of the implemented functions.

## Header File :file_folder:

- [lists.h](./lists.h): This header file encapsulates definitions and function prototypes for all types and functions developed as part of the project.

  | Type/File             | Definition/Prototype                                      |
  | --------------------- | ---------------------------------------------------------- |
  | `struct dlistint_s`   | `int n`, `struct dlistint_s *prev`, `struct dlistint_s *next` |
  | `typedef dlistint_t`  | `struct dlistint_s`                                        |
  | `0-print_dlistint.c`  | `size_t print_dlistint(const dlistint_t *h);`               |
  | `1-dlistint_len.c`    | `size_t dlistint_len(const dlistint_t *h);`                |
  | `2-add_dnodeint.c`    | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);` |
  | `3-add_dnodeint_end.c`| `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);` |
  | `4-free_dlistint.c`   | `void free_dlistint(dlistint_t *head);`                    |
  | `5-get_dnodeint.c`    | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);` |
  | `6-sum_dlistint.c`    | `int sum_dlistint(dlistint_t *head);`                       |
  | `7-insert_dnodeint.c` | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);` |
  | `8-delete_dnodeint.c` | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);` |

## Tasks :page_with_curl:

Each task involves creating a specific function to perform operations on doubly linked lists.

1. **Print list**
   - [0-print_dlistint.c](./0-print_dlinstint.c): A function that prints all elements of a doubly-linked `dlistint_t` list and returns the number of nodes.

2. **List length**
   - [1-dlistint_len.c](./1-dlistint_len.c): A function that returns the number of nodes in a doubly-linked `dlistint_t` list.

3. **Add node**
   - [2-add_dnodeint.c](./2-add_dnodeint.c): A function that adds a new node at the beginning of a doubly-linked `dlistint_t` list, returning the address of the new element.

4. **Add node at the end**
   - [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): A function that adds a new node at the end of a doubly-linked `dlistint_t` list, returning the address of the new element.

5. **Free list**
   - [4-free_dlistint.c](./4-free_dlistint.c): A function that frees a doubly-linked `dlistint_t` list.

6. **Get node at index**
   - [5-get_dnodeint.c](./5-get_dnodeint.c): A function that locates a given node of a doubly-linked `dlistint_t` list by index, returning the address of the located node.

7. **Sum list**
   - [6-sum_dlistint.c](./6-sum_dlistint.c): A function that sums all the data (`n`) in a doubly-linked `dlistint_t` list.

8. **Insert at index**
   - [7-insert_dnodeint.c](./7-insert_dnodeint.c): A function that inserts a new node at a specified index in a doubly-linked `dlistint_t` list.

9. **Delete at index**
   - [8-delete_dnodeint.c](./8-delete_dnodeint.c): A function that deletes the node at a given index in a doubly-linked `dlistint_t` list.

10. **Crackme4**
    - [100-password](./100-password): A text file containing the password for the [crackme4](https://github.com/holbertonschool/0x16.c) executable. Use the provided command for correct code verification.

11. **Palindromes**
    - [102-result](./102-result): A text file containing the largest palindrome derived from the product of two three-digit numbers.

12. **Crackme5**
    - [103-keygen.c](./103-keygen.c): A C function that generates passwords for the [crackme5](https://github.com/holbertonschool/0x16.c) executable. Usage details are provided in the description.
