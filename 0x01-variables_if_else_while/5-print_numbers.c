#include <stdio.h>

/**
 * main - Prints single digits numbers
 * of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
		printf("%d", num);
	printf("%c", '\n');
	return (0);
}
