#include <unistd.h>
#include "main.h"

/**
 * _putchar - Write character c to standard output
 *
 * Return: Always 0 on succession, -1 on
 * error
 */
int _putchar(char c)
{
	return ((write(1, &c, 1));
}
