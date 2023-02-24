#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 excluding 2, 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if ((n == 2) || (n == 4))
			continue;
		_putchar(n + 48);
	}

	_putchar('\n');
}
