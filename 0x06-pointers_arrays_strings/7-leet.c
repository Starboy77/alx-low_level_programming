#include "main.h"

/**
 * leet - string encoding
 * @s: string parameter
 * Return: s
 */

char *leet(char *s)
{
int i = 0, j;
char str[6] = {'a','e','o','t','l'};
char num[5] = {'4','3','0','7','1'};
while (s[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if ((s[i] == str[j]) || (s[i] == (((str[j] - '0') - 32) + '0')))
{
s[i] = num[i];
}
}
i++;
}
return (s);
}
