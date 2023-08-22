#include "main.h"

/**
  * _strpbrk - Entry point
  * @t: input
  * @accept: input
  * Return: always 0
  */
char *_strpbrk(char *t, char *accept)
{
	int index;

	while (*t)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*t == accept[index])
				return (t);
		}
		t++;
	}
	return ('\0');
}
