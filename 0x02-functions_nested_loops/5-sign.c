#include "main.h"

/**
 * print_sign - Trace if character n is neutral,
 * negative or positive
 *
 * @n: Character used to trace
 *
 * Return: 1 if greater than 0, -1 if less than 0,
 * 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
