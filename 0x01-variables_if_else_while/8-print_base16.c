#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
char alpha = 'a';
while (num < 10)
{
putchar((num) + '0');
num++;
}
while (alpha < 'g')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
