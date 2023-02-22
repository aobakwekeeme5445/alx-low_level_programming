#include <stdio.h>

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: 1 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
