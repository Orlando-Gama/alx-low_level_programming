#include <stdio.h>
#include <string.h>

/**
 * _strchr - it locates char in a string
 * @s: string
 * @c: character
 * Return: NULL if not found, otherwise s after the character is located
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)

		return (p);
	return (0);
}
