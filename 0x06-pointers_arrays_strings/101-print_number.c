#include "main.h"

/**
 * print_number - prints an integer;
 * @q: integer to be printed;
 */
void print_number(int q)
{
	unsigned int n1;

	if (q < 0)
	{
		n1 = -q;
		_putchar('-');
	} else
	{
		n1 = q;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
