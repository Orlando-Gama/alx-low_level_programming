#include "function_pointers.h"

/**
  * int_index - return index place if comparison = true, else -1
  * @array: array
  * @size: size of elements in array
  * @cmp: pointer to func of one of the 3 in main
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *ptr;
	int v;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (v = 0, ptr = array; v < size; v++, ptr++)
	{
		if (cmp(*ptr))
			return (v);
	}
	return (-1);
}

