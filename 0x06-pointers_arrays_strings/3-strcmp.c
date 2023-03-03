#include "main.h"

/**
 * _strcmp - Compares two strings by their first
 * characters and compute difference using ascii code
 * value of those first characters
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference of two strings
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0, a = 0, b = 0, c = 0;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			dif = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (dif);
}
