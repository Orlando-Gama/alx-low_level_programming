#include "main.h"

/**
 * _strpbrk - function searches string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to bytes that matches one of byes in accept, or NUL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;

	i = 0;
	z = 0;
	while (s[i] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[i] == accept[z])
				return ((s + i));
			z++;
		}
		i++;
	}
	return (NULL);
}
