#include "main.h"

/**
 * print_number - print number
 * @n: int params
 */
void print_number(int n)
{
int i = 0, res = 0, k, j, l = 0;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n == 0)
{
_putchar(n + '0');
}
while (n != 0)
{
k = n % 10;
n = n / 10;
res = (res * 10) + k;
i++;
}
while (res != 0)
{
l = res % 10;
res = res / 10;
_putchar(l + '0');
j++;
}
}
