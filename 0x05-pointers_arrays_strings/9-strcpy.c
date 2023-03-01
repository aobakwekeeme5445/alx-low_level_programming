#include "main.h"

/**
 * _strcpy - Copy value to another memory location
 *
 * @src: its string is copied
 * @dest: string of @src copied here
 *
 * Return: @dest string
 */
void *_strcpy(char *dest, char *src)
{
	*dest = *src;
	return (dest);
}
