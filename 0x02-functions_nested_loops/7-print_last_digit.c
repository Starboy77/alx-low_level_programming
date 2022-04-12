#include "main.h"
/**
 * print_last_digit - outputs last digit
 * @c: parameter
 * Return: last digit
 */
int print_last_digit(int c)
{
if (c < 0)
{
unsigned int abs = (unsigned int)c;
unsigned int n = abs % 10;
_putchar((n) + '0');
return (n);
}
else
{
int s = c % 10;
_putchar((s) + '0');
return (s);
}
}
