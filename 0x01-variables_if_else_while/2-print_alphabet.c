#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets from a to
 * z in lowercase format
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	char newline;

	newline = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar(newline);
	return (0);
}
