#include "main.h"
/**
 * times_table - outputs times table
 *
 */
void times_table(void)
{
int i, j;
int zero = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
zero = i * j;
if (zero < 10)
{
_putchar((zero) + '0');
}
if (zero >= 10)
{
_putchar((zero / 10) + '0');
_putchar((zero % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
