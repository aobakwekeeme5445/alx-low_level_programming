#include <stdio.h>

/**
 * main - Prints numbers 1-100, but prints
 * Fizz if number is multiple of 3, Buzz if it is
 * multiple of 5, or FizzBuzz if multiple of
 * both 5 and 3
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("%s", "FizzBuzz");
			else
				printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
			printf("%s", "Buzz");

		else
			printf("%d", i);

		printf("%c", 32);
	}
	printf("\n");
	return (0);
}
