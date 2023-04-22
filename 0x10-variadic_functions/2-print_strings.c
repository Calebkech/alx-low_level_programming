#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings then followed by nw line.
 * @separatoe: String that should be printed in bettween strings
 * @n: to tal number of strings passed in the the function.
 * @...: Variable number of strings that will be printed
 *
 * Description: If the seporator is NLL, it is not printed.
 * 	then if one of the string is NULL, (nil) is printed.
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

		if(str == NULL)
			printf("(nil)");
		else 
			printf("%s",str);

		if (index != (n-1) && separator != NULL)
			printf("%s",separator);
	}

	printf("\n");

	va_end(stringz);
}
