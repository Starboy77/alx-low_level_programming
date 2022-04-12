#include "main.h"
/**
 * print_sign - function that checks sign
 * @n: parameter
 * Return: 1 if true, -1 if false
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
