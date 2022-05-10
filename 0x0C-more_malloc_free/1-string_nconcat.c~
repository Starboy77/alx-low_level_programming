#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates string
 * @s1: string parameter
 * @s2: string 2 parameter
 * @n: int params
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i, j, k, l, m, c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;

	while (s1[i] != 0)
		i++;
	j = 0;

	while (s2[j] != 0)
		j++;
	if (n < j + 1)
	{
		p = malloc(i + n + 1);

		if (p == NULL)
			return (NULL);
		for (k = 0; k < i; k++)
		{
			p[k] = s1[k];
		}
		for (l = 0; l < n; l++)
		{
			p[k + l] = s2[l];
		}
		p[k + l] = '\0';
	}
	if (n >= j + 1)
	{
		p = malloc(i + j + 1);

		if (p == NULL)
			return (NULL);
		for (m = 0; m < i; m++)
		{
			p[m] = s1[i];
		}
		for (c = 0; c < j; c++)
		{
			p[m + c] = s2[c];
		}
		p[m + c] = '\0';
	}
	return (p);
}
