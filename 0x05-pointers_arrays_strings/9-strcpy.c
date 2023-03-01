#include "main.h"

/**
 * _strcpy - Copy value to another memory location
 *
 * @src: its string is copied
 * @dest: string of @src copied here
 *
 * Return: @dest string
 */
void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	dest[i] = '\0';

	return (dest);
}
