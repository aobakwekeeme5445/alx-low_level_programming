#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 *
 * Return: 1 on succession
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
