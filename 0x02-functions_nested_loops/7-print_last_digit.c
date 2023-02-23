#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: Number used to prints its last digit
 *
 * Return: Last value of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');

	return (l);
}
