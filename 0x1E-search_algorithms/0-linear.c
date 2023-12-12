#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * .....Integers using the Linear search algorithm
 * @array: array to search in.
 * @size: length of the array.
 * @value: value to look for.
 *
 * Return: first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
