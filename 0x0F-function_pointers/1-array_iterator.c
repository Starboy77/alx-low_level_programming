#include "function_pointers.h"

/**
 * array_iterator - iterate and print each element of array
 * @array: array to be iterated
 * @size: size of array
 * @action: function pointer
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
