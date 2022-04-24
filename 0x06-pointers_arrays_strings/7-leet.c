#include "main.h"

/**
 * leet - string encoding
 * @s: string parameter
 * Return: s
 */

char *leet(char *s)
{
int i = 0;
char str[6] = {'a','e','o','t','l'};
char num[5] = {'4','3','0','7','1'};
while (s[i] != '\0')
{
if ((s[i] == str[i]) || (s[i] == (((str[i] - '0') - 32) + '0')))
{
s[i] = num[i];
}
i++;
}
return (s);
}
