#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse.
  *@k: The string to be printed.
  */
void _print_rev_recursion(char *k)
{
	if (*k)
	{
		_print_rev_recursion(k + 1);
		_putchar(*k);
	}
}

