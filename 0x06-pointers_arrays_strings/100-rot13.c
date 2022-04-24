#include "main.h"
/**
 * rot13 - rot13 encryption function
 * @s: string parameter
 * Return: string s
 */
char *rot13(char *s)
{
int i = 0, j;
 char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
 char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (s[i] != '\0')
{
for (j = 0; j < 52; j++;)
{
if (s[i] == str[j])
{
s[i] = rot[j];
}
}
i++;
}
return (s);
}
