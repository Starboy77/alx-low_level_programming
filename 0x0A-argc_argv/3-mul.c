#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argm count
 * @argv: arg list
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result;
	char *endptr;

	if (argc == 3)
	{
		result = strtol(argv[1], &endptr, 10) * strtol(argv[2], &endptr,
							       10);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
