#include <stdio.h>
#include <string.h>

/**
 * _strcmp - this compares 2 strings
 * @s1: the string 1
 * @s2: the string 2
 * Return: The ASCII difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
