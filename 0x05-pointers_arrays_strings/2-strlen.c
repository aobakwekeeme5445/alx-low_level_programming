#include "main.h"

/**
 * _strlen - compute the length of a string
 *
 * @s: stored a string
 *
 * Return: string lenth
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
