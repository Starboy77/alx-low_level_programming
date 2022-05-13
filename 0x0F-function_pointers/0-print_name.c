#include "function_pointers.h"
#include <stdlib.h>

/**
 * void print_name - prints name
 * @name: name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
