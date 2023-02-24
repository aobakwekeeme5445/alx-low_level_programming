#include "main.h"

/**
 * more_numbers - Prints 0-14 10times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int r;

	for (r = 0; r < 10; r++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
