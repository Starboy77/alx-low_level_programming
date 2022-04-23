#include "main.h"

/**
 * cap_string - check the code
 * @s: string parameter
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
		    || s[i] == ';' || s[i] == '.' || s[i] == '?' || s[i] == '"'
		    || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = (((s[i + 1] - '0') - 32) + '0');
			}
		}
		i++;
	}
	return (s);
}
