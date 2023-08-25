#include "main.h"

/**
  * _strspn - Entry point
  * @v: input
  * @accept: input
  * Return: Always 0 (Success)
  */
unsigned int _strspn(char *v, char *accept)
{
	unsigned int b = 0;
	int q;

	while (*v)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*v == accept[q])
			{
				b++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (b);
		}
		v++;
	}
	return (b);
}

