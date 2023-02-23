#include "main.h"

/**
 * jack_bauer - Prints every minute from
 * 00:00 to 23:59
 *
 * Return: 1 on success
 */
void jack_bauer(void)
{
	int v, w, x, z;

	for (v = 0; v < 3; v++)
	{
		for (w = 0; w < 10; w++)
		{
			for (x = 0; x < 6; x++)
			{
				for (z = 0; z < 10; z++)
				{
					if (v == 2 && w > 3)
						break;

					_putchar(v + '0');
					_putchar(w + '0');
					_putchar(':');
					_putchar(x + '0');
					_putchar(z + '0');

					_putchar('\n');
				}
			}
		}
	}
}
