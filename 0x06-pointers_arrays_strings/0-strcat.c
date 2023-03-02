#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: @src string is appended to this pointer
 * @src: its string is appended to @dest
 *
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
