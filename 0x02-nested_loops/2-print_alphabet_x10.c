#include <stdio.h>

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * in lowercase
 *
 * Return: 1 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int z;

	for (z = 0; z < 10; z++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
	putchar('\n');
	}
}
