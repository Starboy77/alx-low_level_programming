#include "main.h"

/**
 * reverse_array - reverses elements of an int type array
 * @a: parameter array
 * @n: int params
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
