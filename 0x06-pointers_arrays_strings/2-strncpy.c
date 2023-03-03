#include "main.h"

/**
 * _strncpy: Copies n bytes from the source
 * to destination memory location.
 *
 * @dest: Destination of the string.
 * @src: source of the string.
 * @n: number of bytes copied.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0, i = 0;

	while (src[i++])
	slen++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = slen; i < n; i++)
	dest[i] = '\0';

	return (dest);

}
