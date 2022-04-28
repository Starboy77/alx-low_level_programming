#include "main.h"

/**
 * len - lengh of string
 * @d: string parameter
 * @n: int params
 * Return: int
 */

int len(char *d, int n)
{
  if (*d != 0)
    {
      d++;
      n++;
      len(d, n);
    }
  return (n);
}


/**
 * _strlen_recursion - lengh of string
 * @s: string parameter
 * Return: int
 */

int _strlen_recursion(char *s)
{
  int leng = len(s, 0);
  return (leng);
}
