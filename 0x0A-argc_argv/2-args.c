#include "main.h"
#include <stdio.h>

/**
 * main- main function
 * @argc: arg count
 * @argv: agr list
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	putchar('\n');
	return (0);
}
