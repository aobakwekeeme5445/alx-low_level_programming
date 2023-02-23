#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 1 on succession
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
