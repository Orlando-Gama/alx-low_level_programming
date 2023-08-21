#include <stdio.h>
#include <string.h>

/**
 * _strlen - it returns length of string
 * @s: string
 * Return: Always length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
