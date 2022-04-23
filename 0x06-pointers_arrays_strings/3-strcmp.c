#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string parameter 1
 * @s2: string parameter 2
 * Return: interger
 */

int _strcmp(char *s1, char *s2)
{
	int a, val;

	a = 0;
	while (s1[a] && s2[a])
	{
		if (s1[a] == s2[a])
		{
			val = 0;
			a++;
			continue;
		}
		else if (s1[a] > s2[a])
		{
			val = 15;
			break;
		}
		else
		{
			val = -15;
			break;
		}
		a++;
	}
	return (val);
}
