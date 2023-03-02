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
	int len = 0;

	for (int i = 0; *(dest + i) != '\0'; i++)
		len++;

	for (int j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + len) = *(src + j);
		len++;
	}
	*(dest + len) = '\0';

	return (dest);
}
