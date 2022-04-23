#include "main.h"

/**
 * string_toupper - check the code
 * @s: string to transform to uppercase
 * Return: s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (((s[i] - '0') - 32) + '0');
		}
		i++;
	}
	return (s);
}
