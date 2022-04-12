#include "main.h"
/**
 * print_last_digit - outputs last digit
 * @c: parameter
 * Return: last digit
 */
int print_last_digit(int c)
{
if ((c != 0) && (c < 0))
{
int abs = c * -1;
int n = abs % 10;
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
