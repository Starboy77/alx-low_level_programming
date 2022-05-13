#include "function_pointers.h"

/**
 * array_iterator - iterate and print each element of array
 * @array: array to be iterated
 * @size: size of array
 * @action: function pointer
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
		{
			(*action)(array[i]);
		}
	}
}
