#include "main.h"

/**
 * reverse_array - Reverses an array of n element(s).
 *
 * @a: array.
 * @n: number of elements.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int b[n] = {0}, e = 0, i;

	for (i = (n - 1); i >= 0; i--)
	{
		b[e] = a[i];
		e++;
	}

	a[] = b[];
}
