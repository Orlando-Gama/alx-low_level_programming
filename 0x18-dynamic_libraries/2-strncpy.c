#include "main.h"

/**
  * _strncpy - copy a string
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;

	}

	while (p < n)
	{
		dest[p] = '\0';

		p++;
	}
	return (dest);
}

