#include "main.h"
/**
 * print_last_digit - outputs last digit
 * @c: parameter
 * Return: last digit
 */
int print_last_digit(int c)
{
int n = c % 10;
_putchar((n) + '0');
return (n);
}
