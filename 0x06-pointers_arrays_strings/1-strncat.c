#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, p;

	m = 0;
	p = 0;

	while (dest[m] != '\0')
		m++;

	while (src[p] != '\0' && p < n)
	{
		dest[m] = src[p];
		m++;
		p++;
	}

	dest[m] = '\0';

	return (dest);
}
