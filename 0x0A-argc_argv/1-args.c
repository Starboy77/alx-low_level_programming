#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: arg count
 * @argv: arg list
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}