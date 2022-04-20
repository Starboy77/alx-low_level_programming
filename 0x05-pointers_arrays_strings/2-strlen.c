#include "main.h"
/**
 * _strlen - check the code
 * @s: pointer parameter.
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
