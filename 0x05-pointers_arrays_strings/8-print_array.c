#include "main.h"
#include <stdio.h>

/**
  * print_array - a function that prints n elements of an array
  * @d: array name
  * @n: is the number of elements OF the array to be printed
  * Return: d and n input.
  */
void print_array(int *d, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
	{
		printf("%d, ", d[k]);
	}

	if (k == (n - 1))

	{
		printf("%d", d[n - 1]);
	}

	printf("\n");
}

