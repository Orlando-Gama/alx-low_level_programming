#include "main.h"

/**
 * _strchr - returns a point to first occurance of a char in a string.
 * @s: string to search for char in.
 * @c: char to search for.
 *
 * Return: pointer to char or else NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
