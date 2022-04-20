#include "main.h"
/**
 * print_rev - print reverse to stdout
 * @s: parameter
 */
void print_rev(char *s)
{
int count =  0, i, len;
while (*s != '\0')
{
count++;
s++;
}
len = count - 1;
i = len;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
