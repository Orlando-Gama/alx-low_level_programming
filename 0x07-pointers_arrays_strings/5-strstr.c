#include "main.h"

/**
  * _strstr - Entry point
  * @haystack: input
  * @needle: input
  * Return: Always 0 (Success)
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *y = needle;

		while (*i == *y && *y != '\0')
		{
			i++;
			y++;
		}
		if  (*y == '\0')
			return (haystack);
	}
	return (0);
}

