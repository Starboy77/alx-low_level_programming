#include "main.h"
/**
 * print_rev - print reverse to stdout
 * @s: parameter
 */
void print_rev(char *s)
{
int count = 0, i;
while ( *s != '\0')
{count++;
s++;
}
int len = count - 1;
for (i = len; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}