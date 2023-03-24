#include "main.h"

/**
 * print_number - prints an integer
 * @m: integer to be printed
 */
void print_number(int m)
{
	unsigned int m1;

	if (m < 0)
	{
		m1 = -m;
		_putchar('-');
	} else
	{
		m1 = m;
	}

	if (m1 / 10)
	{
		print_number(m1 / 10);
	}

	_putchar((m1 % 10) + '0');
}
