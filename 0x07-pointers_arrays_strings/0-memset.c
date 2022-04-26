#include "main.h"

/**
 * _memset - set values in memory to initial values
 * @s: string parameter
 * @b: char parameter
 * @n: int parameter
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
