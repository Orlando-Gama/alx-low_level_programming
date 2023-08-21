#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - this counts the length of string
 * @s: The string
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
