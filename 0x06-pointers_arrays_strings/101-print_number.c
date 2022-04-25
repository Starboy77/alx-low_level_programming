#include "main.h"

/**
 * print_number - print number
 * @n: int params
 */
void print_number(int n)
{
	unsigned int m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -m;
	}

	if ((m / 10) > 0)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
