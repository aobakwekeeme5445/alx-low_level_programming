#include "main.h"

/**
 * times_table - Prints n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int a, b, op;

        	for (a = 0; a <= n; a++)
		{
                	_putchar('0');
	                for (b = 1; b <= n; b++)
        	        {
	                        op = a * b;
        	                _putchar(',');
                	        _putchar(' ');
                        	if (op <= n)
	                        {
        	                        _putchar(' ');
                	                _putchar(op + '0');
	                        }
        	                else
                	        {
                        	        _putchar((op / 10) + '0');
                                	_putchar((op % 10) + '0');
	                        }
        	        }
                	_putchar('\n');
	        }
	}
}
