#include "main.h"

/**
 * _memcpy - fuction copies n bytes from a source to a destination.
 * @dest: Destionation for the copying the bytes to.
 * @src: Source of the bytes to copy.
 * @n: num of bytes to copy over.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
