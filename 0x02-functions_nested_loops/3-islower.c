#incllude "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: Character checked for case
 *
 * Return: 0 if c is lowercase, 1 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
