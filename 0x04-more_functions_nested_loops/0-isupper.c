#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: value of c checked for case
 *
 * Return: 1 if value c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
