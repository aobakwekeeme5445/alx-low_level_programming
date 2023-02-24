#include "main.h"

/**
 * print_square - Prints # size*2 times to form a square
 *
 * @size: half size of # forming square
 *
 * Return: void
 */
void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
			for (row = 2; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}

	else
		_putchar('\n');
}
