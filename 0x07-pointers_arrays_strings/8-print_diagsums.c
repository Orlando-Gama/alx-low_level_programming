#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Entry point
  * @m: The matrix of integers.
  * @size: The size of the matrix.
  *
  */
void print_diagsums(int *m, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += m[index];
		m += size;
	}
	m -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += m[index];
		m -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}

