#include "main.h"

/**
 * _strcmp - Compares two strings by their first
 * characters and compute difference using ascii code
 * value of those first characters
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference of two strings
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0;

	dif = s1[0] - s2[0];

	return ("%c", dif);
}
