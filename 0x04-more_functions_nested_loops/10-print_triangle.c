#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int n, h;

		for (n = 1; n <= size; n++)
		{
			for (h = n; h < size; h++)
			{
				_putchar(' ');
			}

			for (h = 1; h <= n; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
