#include "main.h"

/**
  * _strncpy - copy a string
  * @dest: input value
  * @src: input value
  * @n: input value
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}

