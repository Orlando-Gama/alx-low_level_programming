#include "main.h"

/**
  * _strpbrk - Entry point
  * @t: input
  * @accept: input
  * Retrun: Always 0 (Success)
  */
char *_strpbrk(char *t, char *accept)
{
	int e;

	while (*t)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*t == accept[e])
				return (t);
		}
		t++;
	}
	return ('\0');
}
