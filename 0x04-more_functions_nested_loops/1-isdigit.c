#include "main.h"

/**
 * _isdigit - Checks if value of c is a digit (0-9)
 *
 * @c: its value is checked
 *
 * Return: 1 if value of c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	else if (c < 0 && c > 9)
		return (0);
}
