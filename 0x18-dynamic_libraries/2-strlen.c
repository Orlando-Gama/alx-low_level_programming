#include "main.h"

/**
  * _strlen - returns the length of a string
  * @n: string
  * Return: length
  */
int _strlen(char *n)
{
	int natasha = 0;

	while (*n != '\0')
	{
		natasha++;
		n++;
	}

	return (natasha);
}
