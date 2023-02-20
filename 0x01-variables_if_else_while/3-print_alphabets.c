#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lowercase
 * then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	char newline;

	newline = '\n';
	for (alphabet = 'a', alphabet <= 'z', alphabet++)
		putchar(alphabet);
	for (alphabet = 'A', alphabet <= 'Z', alphabet++)
		putchar(alphabet);
	putchar(newline);
	return (0);
}
