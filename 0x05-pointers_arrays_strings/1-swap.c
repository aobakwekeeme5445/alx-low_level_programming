#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: integer1
 * @b: integer2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
