#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f  = malloc(sizeof(*f));
	(*f)(name);
	free(f);
}
