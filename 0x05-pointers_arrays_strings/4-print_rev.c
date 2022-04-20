#include "main.h"
/**
 * print_rev - print reverse to stdout
 * @s: parameter
 */
void print_rev(char *s)
{
int count = 0;
while ( *s != '\0')
{count++;
s++;
}
for (i = (count - 1); i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
