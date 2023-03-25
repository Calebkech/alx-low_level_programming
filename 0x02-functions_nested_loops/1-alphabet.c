#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
