#include "main.h"

/**
 * print_diagonal - Draw diagonal n times
 *
 * @n: times diagonal is drawn
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int col, space;

	if (n > 0)
	{
		for (col = 1; col <= n; col++)
		{
			for (space = 2; space < col; space++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	else
		_putchar('\n');
}
