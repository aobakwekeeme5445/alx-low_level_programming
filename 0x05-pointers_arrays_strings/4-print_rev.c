#include "main.h"

/**
 * print_rev - Reverse a string
 *
 * @s: Hold string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
		i++;

	for (s[j] = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
