#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * maij - main function
 * @argc: argument count
 * @argv: argument list
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	long unsigned int j, sum = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += strtol(argv[i], &ptr, 10);
	}
	printf("%ld\n", sum);
	return (0);
}
