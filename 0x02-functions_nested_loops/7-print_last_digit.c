#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @o: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int o)
{
	int ld = o % 10;

	if (ld < o)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}

