#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument list
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *s;

	int i, j, l, m, index = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (0);
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
		{
			s[index++] = av[l][m];
		}
		s[index++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
