#include "main.h"

/**
  * _strncat - concatenate two strings
  * using at most n bytes from src
  * @dest: input value
  * @src: input value
  * @n: input value
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (dest);
}

