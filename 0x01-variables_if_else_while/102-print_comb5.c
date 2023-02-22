#include <stdio.h>

/**
 * main - Prints possible combinations of two digits
 * from 0 to 99
 *
 * Return: 0 on succession
 */
int main(void)
{
	int x, z;

	for (x = 0; x < 100; x++)
		for (z = 0; z < 100; z++)
		{
		if (x < z)
		{
			putchar((x / 10) + 48);
			putchar((x % 10) + 48);
			putchar(' ');
			putchar((z / 10) + 48);
			putchar((z % 10) + 48);

		if (x != 98 || z != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	putchar('\n');
	return (0);
}
