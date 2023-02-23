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
	int absValue;
	int x  = n;

	if (x < 0)
		x = x * (-1);

	absValue = x;

	return (absValue);
}
