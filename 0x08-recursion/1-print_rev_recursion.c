#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string parameter
 */

char *len(char *d)
{
  if (*d != 0)
    {
      len(d + 1);
    }
  else
    {
      return (d - 1);
    }
}


void _print_rev_recursion(char *s)
{
  const char *start = &s[0];
  len(s);
  if (s >= start)
    {
  _putchar(*s);
  _print_rev_recursion(s - 1);
    }
  else
    {
      return;
    }
}
