#include "main.h"

/**
 * _strlen_recursion - lengh of string
 * @s: string parameter
 * Return: int
 */

int _strlen_recursion(char *s)
{
  int i = 0;
  if (*(s + i) != 0)
    {
      i++;
      _strlen_recursion(s + i);
    }
  else
    {
    return (i);
    }
  
}
