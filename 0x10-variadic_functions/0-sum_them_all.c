#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: a const type of integer
  * @...: An unknown variable parameters to calculate
  * Return: 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int q;
	int sum = 0;

	va_start(ap, n);

	for (q = 0; q < n; q++)
		sum += va_arg(ap, int);
	va_end(ap);
	return sum;
}

