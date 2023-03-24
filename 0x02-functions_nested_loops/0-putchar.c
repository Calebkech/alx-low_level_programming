#include "main.h"
<<<<<<< HEAD
	/**
	 * main - print _putchar
	 * is written by mbah
	 * Return: 0
	 */


	int main(void)
	{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
	}
=======
#include <unistd.h>
>>>>>>> 20febc28b270f43a98d0b7f1b24f2871fd792aba

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
