#include "main.h"

/**
 * _strncpy - copy string to destination
 * @dest: dset string parameter
 * @src: source string parameter
 * @n: integer bytes params
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
