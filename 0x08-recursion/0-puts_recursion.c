#include "main.h"

/**
  * _puts_recursion - Prints a string followed by a newline character
  *
  * @w: Pointer to the string to be printed.
  *
  * Return: 0
  */
void _puts_recursion(char *w)
{
	if (*w == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*w);
	w++;
	_puts_recursion(w);
}

