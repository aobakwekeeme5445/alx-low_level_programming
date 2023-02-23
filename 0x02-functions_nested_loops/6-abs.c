#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 *
 * @n: integer used to return its
 * absolute value
 *
 * Return: O on success
 */
int _abs(int n)
{

	if (n < 0)
		_putchar(-(n));
	else
		_putchar(n);
	absValue = n;

	return (absValue);
}
