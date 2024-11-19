#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: If separator is NULL, it is not printed. If any string
 *              is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char * temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		printf("%s", temp != NULL ? temp : "(nil)");
		if (separator != NULL && i < (n - 1))
		{
			printf("%s",separator);
		}
	}
	printf("\n");

	va_end(args);
}
