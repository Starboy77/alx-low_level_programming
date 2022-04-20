#include "main.h"
/*
 * _puts - output to stdout
 * @str: parameter
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++
}
}
