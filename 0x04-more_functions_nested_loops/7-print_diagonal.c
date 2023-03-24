#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int k, j;

		for (k = 0; k < n; k++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == k)
					_putchar('\\');
				else if (j < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
