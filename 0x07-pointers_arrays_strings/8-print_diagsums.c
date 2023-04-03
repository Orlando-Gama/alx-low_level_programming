#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Entry point
  * @m: input
  * @size: input
  * Return: Always 0 (Success)
  */
void print_diagsums(int *m, int size)
{
	int sum1, sum2, t;

	sum1 = 0;
	sum2 = 0;

	for (t = 0; t < size; t++)
	{
		sum1 = sum1 + m[t * size + t];
	}
	for (t = size - 1; t >= 0; t--)
	{
		sum2 += m[t * size + (size - t - 1)];
	}
	printf("%d %d\n", sum1, sum2);
}

