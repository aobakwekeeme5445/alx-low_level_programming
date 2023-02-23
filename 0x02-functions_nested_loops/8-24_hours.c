#include "main.h"

/**
 * jack_bauer - Prints every minute from
 * 00:00 to 23:59
 *
 * Return: 1 on success
 */
void jack_bauer(void)
{
	int x, z;

	for (x = 00; x < 24; x++)
	{
		for (z = 00; z < 60; z++)
		{
			_putchar(x);
			_putchar(':');
			_putchar(z);
		}
	}
}
