#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets in lowercase
 * 10 times
 *
 * Return: 1 on succession
 */
void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}
}
