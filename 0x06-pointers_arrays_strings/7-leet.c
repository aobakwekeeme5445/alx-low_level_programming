#include "main.h"

/**
  * leet - Encodes a string into `1337`.
  *
  * @s: The string to encode.
  *
  * Return: @s.
  */
char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == r[b] || s[a] - 32 == l[b])
			{
				s[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
