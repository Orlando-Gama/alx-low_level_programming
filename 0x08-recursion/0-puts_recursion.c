#include "main.h"

/**
  * _puts_recursion - Prints a string followed by a newline character
  *
  * @s: Pointer to the string to be printed.
  *
  * Return: 0
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

