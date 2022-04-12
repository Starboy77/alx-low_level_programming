#ifndef header_file
#define header_file
#include <unistd.h>
/**
 * _putchar - print a single character.
 * @c: character params.
 * That's it.
 * Return: character.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * printput - Output "_putchar".
 * That's it.
 */
void printput(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
}
/**
 * print_alphabet - print a single character.
 *
 * That's it.
 */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
#endif
