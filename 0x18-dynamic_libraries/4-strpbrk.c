#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - it searches string for any set of bytes
 * @s: string
 * @accept: Bytes
 * Return: Where bytes starts, or Null.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y, pos, Z = 0;

	for (x = 0; s[x] != '\0'; x++)
		;

	pos = x;

	for (x = 0; accept[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				if (y <= pos)
				{
					pos = y;
					Z = 1;
				}
			}
		}
	}
	if (Z == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
