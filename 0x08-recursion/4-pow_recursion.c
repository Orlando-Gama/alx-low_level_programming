#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power y
  * @a: value to raise
  * @b: power
  *
  * Return: result of the power
  */
int _pow_recursion(int a, int b)
{
	int result = a;

	if (b < 0)
		return (-1);
	else if (b == 0)
		return (1);
	result *= _pow_recursion(a, b - 1);
	return (result);
}

