#include "main.h"
/**
 * _isalpha - function to check alphabetical character.
 * @c: character parameter.
 * Return: 1 if true, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
