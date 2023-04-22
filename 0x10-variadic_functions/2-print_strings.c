#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings separated by a separator string.
 * @separator: The string to print between the strings. Can be NULL.
 * @n: The total number of strings passed to the function.
 * @...: A variable number of strings to print.
 *
 * Description: If the separator is NULL, it is not printed.
 *              Then if one of the strings is NULL, "(nil)" is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringz;
	char *str;
	unsigned int index;

	va_start(stringz, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(stringz, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(stringz);
}
