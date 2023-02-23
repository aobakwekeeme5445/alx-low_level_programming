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
	int i;

	i = n;
	if (i > 98)
	{
		for  (; i >= 97; i--)
			printf("%d, ", i);
	}

	else
	{
		for (; i <= 97; i++)
			printf("%d, ", i);
	}
	printf("%d\n", n);
}
