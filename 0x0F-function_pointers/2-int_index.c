#include "function_pointers.h"


/**
 * int_index - searches for an integer
 * @array: pointer to int
 * @size: array size
 * @cmp: pointer to a function
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (!(*cmp)(array[i]))
			continue;
		else
		{
			index = i;
			return (index);
		}
	}
	if (index == -1)
		return (-1);
}
