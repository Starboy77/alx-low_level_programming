#include "main.h"
/**
 * print_last_digit - outputs last digit
 * @c: parameter
 * Return: last digit
 */
int print_last_digit(int c)
{
int i = 0;
while (i < 2)
{
int n = c % 10;
_putchar((n) + '0');
_putchar((n) + '0');
i++;
}
return (0);
}
