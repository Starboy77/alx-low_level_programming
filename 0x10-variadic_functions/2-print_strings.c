#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - print out strings
 * @separator: string pointer
 * @n: integer parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	const char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, const char *);
		if (str == NULL)
		{
			printf("(nil)");
			if (i < n - 1)
			{
				if (separator != NULL)
				printf("%s", separator);
			}
			continue;
		}
		else
		{
			printf("%s", str);
			if (i < n - 1)
			{
				if (separator != NULL)
				printf("%s", separator);
			}
			continue;
		}
	}
	va_end(ptr);
	printf("\n");
}
