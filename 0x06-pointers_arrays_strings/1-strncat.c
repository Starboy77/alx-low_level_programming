#include "main.h"

/**
 * _strncat - concantenates strings in bytes
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: integer parameter
 * Return: string dset
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len;

	while (dest[i] != '\0')
		i++;
	len = i - 1;
	int j = 0, k = 1;

	while (j < n && src[j] != '\0')
	{
		dest[len + k] = src[j];
		j++;
		k++;
	}
	dest[len + k] = '\0';
	return (dest);
}
