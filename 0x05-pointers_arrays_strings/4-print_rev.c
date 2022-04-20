#include "main.h"
/**
 * print_rev - print reverse to stdout
 * @s: parameter
 */
​void​ ​print_rev​(​char​ *s)
{
int​ i = ​0​;
while​ (s[i])
i++;
while​ (i--)
{
_putchar​(s[i]);
}
_putchar​(​'​\n​'​);
}
