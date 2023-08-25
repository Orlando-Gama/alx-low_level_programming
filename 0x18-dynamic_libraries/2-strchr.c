#include "main.h"

/**
  * _strchr - Entry point
  * @p: input
  * @n: input
  * Return: aleays 0 (success)
  */
char *_strchr(char *p, char n)
{
	int f = 0;

	for (; p[f] >= '\0'; f++)
	{
		if (p[f] == n)
			return (&p[f]);
	}
	return (0);
}

