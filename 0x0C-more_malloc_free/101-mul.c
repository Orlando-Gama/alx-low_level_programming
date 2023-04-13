#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * is_digit - checks if a string contains a non-digit char
  * @s: string to be evaluated
  *
  * Return: 0 if a non-digit is found, 1 otherwise
  */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
