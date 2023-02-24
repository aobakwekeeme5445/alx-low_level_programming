#include "main.h"

/**
 * more_numbers - Prints 0-14 10times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int t;

	for (t = 0; t < 9; t++)
	{
		for (n = 0; n < 15; n++)
			_putchar(n + '0');

		_putchar('\n');
	}
}
