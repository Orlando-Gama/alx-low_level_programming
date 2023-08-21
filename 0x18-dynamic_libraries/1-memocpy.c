#include <stdio.h>
#include <string.h>

/**
 * _memcpy - this copies from the src to dest
 * @dest: dest
 * @src: src
 * @n: amount to be copied
 * Return: Altered dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}

	return (dest);
}
