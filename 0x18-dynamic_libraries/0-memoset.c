#include <stdio.h>

/**
 * _memset -this  fills memory with constant byte
 * @s: area to be being looked at
 * @b: byte filling memory
 * @n: amount of memory being filled
 * Return: new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
