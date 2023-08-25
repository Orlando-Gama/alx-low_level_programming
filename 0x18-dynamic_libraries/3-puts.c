#include "main.h"

/**
 * _puts - minic the stdio version of puts
 * @str: value to process to the stdout.
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
