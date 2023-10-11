# 0x0F-function_pointers

## 0-print_name.c

This C code defines a function called print_name. It takes a string (name) and a function pointer (f) as arguments. The purpose of this function is to print the name using the function pointed to by f. It includes checks for null inputs to ensure safe execution. By using function pointers, you can customize the printing behavior by passing different print functions as f.

## 1-array_iterator.c

This C code defines a function called array_iterator. It takes three arguments:

array: A pointer to an integer array.
size: A size_t variable representing the number of elements in the array.
action: A pointer to a function that takes an integer as an argument.
The purpose of this function is to iterate through the elements of the array and apply the provided action function to each element. If either the array or action is NULL, the function returns without performing any actions to ensure safe execution.

The for loop iterates through the elements of the array, and for each element, the action function is called with the element as an argument. This allows you to customize the behavior of the function by passing different action functions as needed, such as printing elements in regular or hexadecimal format, depending on the function pointed to by action.

## 2-int_index.c

This C code defines a function called int_index. It takes three arguments:

array: A pointer to an integer array.
size: An integer representing the number of elements in the array.
cmp: A pointer to a function that takes an integer as an argument and returns an integer.
The purpose of this function is to search for an element in the array by applying the cmp function to each element. If the cmp function returns a true value for any element, the index of that element is returned. If the array is NULL, size is less than or equal to zero, or cmp is NULL, the function returns -1 to indicate an error or that no matching element was found.

The for loop iterates through the elements of the array, and for each element, the cmp function is called. If the cmp function returns a true value (non-zero), the index of the current element is returned. If no element matches the condition specified by the cmp function, the function returns -1 to indicate that no matching element was found.

## 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

This C program is designed to perform simple mathematical operations based on command-line arguments. Here's an explanation of the code:

1. `#include "function_pointers.h"`: This line includes a user-defined header file named "function_pointers.h." It's likely used for function prototypes or declarations related to function pointers.

2. `#include <stdlib.h>`: This line includes the standard library header for `stdlib.h`, which provides functions like `atoi` and `exit`.

3. `#include <stdio.h>`: This line includes the standard library header for `stdio.h`, which provides functions like `printf`.

4. `#include "3-calc.h"`: This line includes a user-defined header file named "3-calc.h." It's likely used for function prototypes or declarations related to a calculator program.

5. `int main(int __attribute__((__unused__)) argc, char *argv[])`: This is the `main` function, the entry point of the program. It takes two arguments: `argc` (the number of command-line arguments) and `argv` (an array of pointers to the arguments).

6. `if (argc != 4)`: This condition checks whether there are exactly 4 command-line arguments (including the program name). If not, it means the user hasn't provided the expected input, and an error message is printed.

7. `num1 = atoi(argv[1]);`: This line converts the first command-line argument (the left operand) to an integer and assigns it to the variable `num1`.

8. `op = argv[2];`: This line assigns the second command-line argument (the operator) to the variable `op`.

9. `num2 = atoi(argv[3]);`: This line converts the third command-line argument (the right operand) to an integer and assigns it to the variable `num2`.

10. `if (get_op_func(op) == NULL || op[1] != '\0')`: This condition checks two things:
    - It uses the `get_op_func` function (presumably defined elsewhere) to check if the specified operator `op` is valid. If it returns `NULL`, an error message is printed.
    - It checks if the operator is a single character (the second condition `op[1] != '\0'`). If it's not a single character, it's considered an invalid operator, and an error message is printed.

11. `if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))`: This condition checks if the operator is either division (`/`) or modulo (`%`) and if the right operand is zero. In such cases, it prints an error message and exits the program.

12. `printf("%d\n", get_op_func(op)(num1, num2));`: This line calculates the result of the operation by calling the appropriate function pointed to by `get_op_func(op)` and passing the `num1` and `num2` as arguments. The result is printed to the standard output.

13. `return (0);`: The `main` function ends with a return statement, indicating successful execution of the program.

This program is a simple command-line calculator that can perform basic arithmetic operations based on the provided command-line arguments.

## 100-main_opcodes.c

This C program is designed to print the opcodes (machine code instructions) of its own executable code. Here's an explanation of the code:

1. `#include <stdio.h>`: This line includes the standard library header for `stdio.h`, which provides functions like `printf`.

2. `#include <stdlib.h>`: This line includes the standard library header for `stdlib.h`, which provides functions like `atoi` and `exit`.

3. `int main(int argc, char *argv[])`: This is the `main` function, the entry point of the program. It takes two arguments: `argc` (the number of command-line arguments) and `argv` (an array of pointers to the arguments).

4. `if (argc != 2)`: This condition checks if there is exactly one command-line argument provided (in addition to the program name). If not, it means the user hasn't provided the expected input, and an error message is printed. The program exits with a non-zero status code (1) to indicate an error.

5. `bytes = atoi(argv[1]);`: This line converts the command-line argument (a string representing the number of bytes to print) to an integer and assigns it to the `bytes` variable.

6. `if (bytes < 0)`: This condition checks if the value of `bytes` is negative. If it is, it means the user has provided an invalid input, and an error message is printed. The program exits with a non-zero status code (2) to indicate an error.

7. `arr = (char *)main;`: This line casts the `main` function to a character pointer and assigns it to the `arr` variable. This effectively points to the beginning of the program's machine code instructions.

8. The `for` loop iterates through the opcodes and prints them in hexadecimal format:
   - `printf("%02hhx ", arr[i]);`: This line prints the opcode at index `i` of the `arr` array in hexadecimal format. The `%02hhx` format specifier is used to print two characters (bytes) in hexadecimal with zero padding.
   - The loop continues to print each opcode until the specified number of `bytes` has been printed.

9. The program returns 0 at the end of the `main` function, indicating successful execution.

This program essentially takes a number of bytes as input and prints the opcodes of its own executable code up to the specified number of bytes in hexadecimal format. It's a simple example of self-inspection for a C program.