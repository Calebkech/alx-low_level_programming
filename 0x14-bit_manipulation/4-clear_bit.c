#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @number: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *number, unsigned int index)
{
    unsigned long int power;
    unsigned int tempIndex;

    if (index > 64)
        return (-1);
    tempIndex = index;
    for (power = 1; tempIndex > 0; power *= 2, tempIndex--)
        ;

    if ((*number >> index) & 1)
        *number -= power;

    return (1);
}