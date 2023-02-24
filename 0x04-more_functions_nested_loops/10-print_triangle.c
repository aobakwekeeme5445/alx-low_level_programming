#include "main.h"

/**
 * print_traingle - Prints triangle using #
 *
 * size: height of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int col, row;

	if (size > 0)
	{
		for (col = 0; col <= size; col++)
	
		{
			for (row = (size - 1); row >= 0; row--)
				_putchar(' ');
		}
			_putchar('#');
			_putchar('\n');
	}

	else
		_putchar('\n');
}
