#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @number: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *number, unsigned int index)
{
    unsigned long int power;

    if (index > 64)
        return (-1);

    for (power = 1; index > 0; index--, power *= 2)
        ;
    *number += power;

    return (1);
}