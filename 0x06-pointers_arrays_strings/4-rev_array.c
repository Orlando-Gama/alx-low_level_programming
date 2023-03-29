#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int c, w, tmp;

	w = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		tmp = a[c];
		a[c] = a[w];
		a[w--] = tmp;
	}
}
