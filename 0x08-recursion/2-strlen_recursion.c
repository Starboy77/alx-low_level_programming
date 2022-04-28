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
      len(d + 1, n + 1);
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
