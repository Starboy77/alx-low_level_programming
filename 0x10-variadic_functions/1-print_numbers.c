#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints out numbers
 * @s: seperator pointer
 * @n: unsigned int parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (ptr != NULL)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i < n - 1)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
	}
	va_end(ptr);
	putchar('\n');
}
