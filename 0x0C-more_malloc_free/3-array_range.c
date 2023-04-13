#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers.
  * @min: minimum value.
  * @max: maximum value.
  *
  * Return: pointer to the newly created array.
  * if man > mix, returns NULL.
  * if malloc fails, returns NULL.
  */
int *array_range(int min, int max)
{
	int *ar;
	int k;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (k = 0; min <= max; k++, min++)
		ar[k] = min;
	return (ar);
}

