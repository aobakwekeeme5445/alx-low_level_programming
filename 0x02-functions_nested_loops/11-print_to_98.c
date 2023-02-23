#include <stdio.h>

/**
 * print_to_98 - Prins natural number from n to 98
 *
 * @n: Starting point
 *
 * Return: value of n
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for  (; n > 98; n--)
			printf("%d, ", n);
	}

	else
	{
		for (; n <= 97; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
