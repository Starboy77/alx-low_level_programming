#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string parameter
 * Return: string
 */

char *_strdup(char *str)
{
	int i, j = 0;

	char *dup;

	if (str == NULL)
		return (0);
	while (str[j] != '\0')
	{
		j++;
	}
	j = j + 1;
	dup = malloc(sizeof(*dup) * j);
	if (dup == NULL)
		return (0);
	for (i = 0; i < j; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
