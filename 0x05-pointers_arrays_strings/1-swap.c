#include "main.h"

/**
  * swap_int - swaps the value of twi integers
  * @b: integer to swap
  * @c: integer to swap
  */
void swap_int(int *b, int *c)
{
	int m;

	m = *b;
	*b = *c;
	*c = m;
}

