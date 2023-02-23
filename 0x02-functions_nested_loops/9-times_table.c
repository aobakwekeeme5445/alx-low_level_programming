#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, op;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			op = a * b;
			_putchar(',');
			_putchar(' ');
			if (op <= 9)
			{
				_putchar(' ');
				_putchar(op + '0');
			}
			else
			{
				_putchar((op / 10) + '0');
				_putchar((op % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
