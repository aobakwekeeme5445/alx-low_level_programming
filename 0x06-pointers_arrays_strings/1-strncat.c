#include "main.h"

/**
 * _strncat - Concatenates two string, it use at
 * most `n` bytes from source string
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes extracted from source
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
