#include "main.h"

int len(char *d, int n)
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



/**
 * _print_rev_recursion - print string in reverse
 * @s: string parameter
 */

void _print_rev_recursion(char *s)
{

  len(s);
  if (s >= start)
    {
  _putchar(*s);
  _print_rev_recursion(s - 1);
    }

}
