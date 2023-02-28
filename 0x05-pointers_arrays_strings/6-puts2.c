#include <stdio.h>
#include "main.h"

/**
* puts2 - Prints a string followed by a new line
*
* @str: pointer value
*
* Return: Nothing
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		 i++;
	}

	_putchar('\n');
}
