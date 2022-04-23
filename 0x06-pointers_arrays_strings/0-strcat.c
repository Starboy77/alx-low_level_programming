#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: dest string
 * @src: source string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	while (dest[i] != '\0')
		i++;
	len = i - 1;
	int j = 0, k = 1;

	while (src[j] != '\0')
	{
		dest[len + k] = src[j];
		j++;
		k++;
	}
	dest[len + k] = '\0';
	return (dest);
}
