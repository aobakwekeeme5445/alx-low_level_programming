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
	int len = 0, j = 1;

	for (int i = 0; *(dest + i) != '\0'; i++)
		len++;

	for (int k = 0; *(src + k) != '\0'; k++)
	{
		*(dest + (len + j)) = *(src + k);
		j++;
	}
	*(dest + (len + j + 1)) = '\0';

	return (dest);
}
