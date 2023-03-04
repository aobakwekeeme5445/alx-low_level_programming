#include "main.h"
#include <stdio.h>

/**
  * cap_string - Capitalizes all words of a string.
  *
  * @s: separators.
  *
  * Return: char value.
  */
char *cap_string(char *s)
{
	int j = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[j])
	{
		i = 0;

		while (i < cspc)
		{
			if ((j == 0 || s[j - 1] == spc[i]) && (s[j] >= 97 && s[j] <= 122))
				s[j] -= 32;

			i++;
		}

		j++;
	}

	return (s);
}
