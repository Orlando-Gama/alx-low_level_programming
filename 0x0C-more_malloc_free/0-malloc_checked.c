#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @q: number of bytes to allocates
  *
  * Return: a pointer to the allocated memory.
  * if malloc fails, status value is equal to 98.
  */
void *malloc_checked(unsigned int q)
{
	char *j;

	j = malloc(q);

	if (j == NULL)
		exit(98);
	return (j);
}

