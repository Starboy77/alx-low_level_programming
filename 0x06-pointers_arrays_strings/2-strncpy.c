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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
