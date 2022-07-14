#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: string parameter
 * @s2: string parameter
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, len;

	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	len = i + j + 1;
	cat = malloc(sizeof(*cat) * len);
	if (cat == NULL)
		return (0);
	for (k = 0; k < i; k++)
	{
		cat[k] = s1[k];
	}
	for (l = 0; l < (j + 1); l++)
	{
		cat[k + l] = s2[l];
	}
	return (cat);
}
