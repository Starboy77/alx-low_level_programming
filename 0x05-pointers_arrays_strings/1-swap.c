#include "main.h"

/**
 * swap_int - check the code
 * @a: pointer parameter 1
 * @b: pointer parameter 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
