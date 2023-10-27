# 0x14. C - Bit manipulation

This repository contains several code snippets that perform various operations related to binary numbers and endianness. Each code snippet is explained below.

## binary_to_uint.c

This code snippet defines a function `binary_to_uint` that converts a binary number represented as a string to an unsigned integer. The function takes a `const char*` parameter `binary` which is the binary number to be converted. It returns the converted decimal number or 0 if there is an unconvertible character in the binary string.

## print_binary.c

The `print_binary` function in this code snippet prints the binary representation of a decimal number. It takes an `unsigned long int` parameter `number` which is the decimal number to be printed. If the number is 0, it simply prints "0". Otherwise, it uses bitwise operations to iterate through the bits of the number and prints "1" or "0" depending on the value of each bit.

## get_bit.c

The `get_bit` function in this code snippet retrieves the value of a bit at a given index in a decimal number. It takes two parameters: `number`, which is the decimal number to evaluate, and `index`, which is the index of the bit to retrieve (starting from 0). The function returns the value of the bit at the specified index or -1 if an error occurs. It uses bitwise shifting and masking operations to extract the desired bit.

## set_bit.c

The `set_bit` function sets the value of a bit to 1 at a given index in a decimal number. It takes two parameters: `number`, which is a pointer to the decimal number to be modified, and `index`, which is the index of the bit to set (starting from 0). The function returns 1 if the operation is successful or -1 if an error occurs. It uses bitwise shifting and addition to set the desired bit.

## clear_bit.c

The `clear_bit` function sets the value of a bit to 0 at a given index in a decimal number. It takes two parameters: `number`, which is a pointer to the decimal number to be modified, and `index`, which is the index of the bit to clear (starting from 0). The function returns 1 if the operation is successful or -1 if an error occurs. It uses bitwise shifting and subtraction to clear the desired bit.

## flip_bits.c

The `flip_bits` function calculates the number of bits that need to be flipped in order to convert one decimal number to another. It takes two parameters: `number1` and `number2`, which are the two decimal numbers to compare. The function returns the number of bits that need to be flipped. It uses bitwise XOR and bitwise AND operations to determine the differing bits between the two numbers.

## get_endianness.c

The `get_endianness` function checks the endianness of the system. It returns 0 if the system is big endian or 1 if it is little endian. The function uses a bitwise operation to check the value of the least significant byte of an integer and determine the endianness based on that.

Feel free to explore the code snippets and use them in your projects as needed.